/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:20:02 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/10/02 16:45:17 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static	void	reverse_rotate(t_stack	*ptr)
{
	t_stack_node	*tmp;

	if (ptr->head && ptr->tail->prev)
	{
		tmp = ptr->tail;
		ptr->tail = tmp->prev;
		tmp->next = ptr->head;
		ptr->head->prev = tmp;
		ptr->head = tmp;
		tmp->prev = NULL;
		ptr->tail->next = NULL;
	}
}

void	rra(t_data *data)
{
	reverse_rotate(data->a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_data *data)
{
	reverse_rotate(data->b);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_data *data)
{
	reverse_rotate(data->a);
	reverse_rotate(data->b);
	ft_putendl_fd("rrr", 1);
}
