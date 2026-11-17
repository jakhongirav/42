/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:14:35 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/11/17 16:52:00 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

static char	*fill_stash(int fd, char *stash, char *buf)
{
	ssize_t	cfr;

	while (find_nl(stash) == -1)
	{
		cfr = read(fd, buf, BUFFER_SIZE);
		if (cfr < 0)
		{
			free(stash);
			return (NULL);
		}
		else if (cfr == 0)
			break ;
		buf[cfr] = '\0';
		stash = append_stash(stash, buf);
		if (!stash)
			break ;
	}
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*res;
	char		*buf;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	stash = fill_stash(fd, stash, buf);
	free(buf);
	if (!stash)
		return (NULL);
	res = extract(stash);
	stash = clean_stash(stash);
	return (res);
}
