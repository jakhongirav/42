/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:15:41 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/11/17 16:16:20 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*clean_stash(char *stash)
{
	char	*res;
	int		start;
	int		i;

	start = find_nl(stash) + 1;
	if (!stash || start <= 0 || stash[start] == '\0')
	{
		free(stash);
		return (NULL);
	}
	res = malloc(len_please(stash) - start + 1);
	if (!res)
	{
		free(stash);
		return (NULL);
	}
	i = 0;
	while (stash[start])
		res[i++] = stash[start++];
	res[i] = '\0';
	free(stash);
	return (res);
}

char	*append_stash(char *stash, char *buf)
{
	char	*res;
	int		i;
	int		j;

	res = malloc(len_please(stash) + len_please(buf) + 1);
	if (!res)
	{
		free(stash);
		return (NULL);
	}
	i = 0;
	j = 0;
	while (stash && stash[i])
	{
		res[i] = stash[i];
		i++;
	}
	while (buf && buf[j])
		res[i++] = buf[j++];
	res[i] = '\0';
	free(stash);
	return (res);
}

char	*extract(char *stash)
{
	char	*res;
	int		len;
	int		i;

	if (!stash || stash[0] == '\0')
		return (NULL);
	len = find_nl(stash);
	if (len >= 0)
		len = len + 1;
	else
		len = len_please(stash);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = stash[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	len_please(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i])
		i++;
	return (i);
}

int	find_nl(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}
