/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabdujal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:20:35 by jabdujal          #+#    #+#             */
/*   Updated: 2026/08/18 17:32:33 by jabdujal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	/* Empty list */
	list = NULL;
	last = ft_lstlast(list);
	printf("Empty list: %p\n", (void *)last);

	/* One node */
	node1 = ft_lstnew("first");
	list = node1;

	printf("%s\n", "first list created");
	last = ft_lstlast(list);
	printf("One node: %s\n", (char *)last->content);

	/* Three nodes */
	node2 = ft_lstnew("second");
	node3 = ft_lstnew("third");

	node1->next = node2;
	node2->next = node3;

	last = ft_lstlast(list);

	printf("Three nodes - last: %s\n", (char *)last->content);

	return (0);
}
