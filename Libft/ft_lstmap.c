/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabdujal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 19:28:29 by jabdujal          #+#    #+#             */
/*   Updated: 2026/08/18 19:57:23 by jabdujal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;

	res = ft_lstnew(lst);
	while (lst)
	{
		ft_lstiter(lst, f);
		res->content = lst->content;
		lst = lst->next;
	}

