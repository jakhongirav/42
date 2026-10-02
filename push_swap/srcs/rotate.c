/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:52:26 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/10/02 16:41:37 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static	void	rotate(t_stack *ptr)
{
	t_stack_node	*first;

	if (ptr && ptr->head && ptr->head->next)
	{
		first = ptr->head;
		ptr->head = first->next;
		ptr->head->prev = NULL;
		ptr->tail->next = first;
		first->prev = ptr->tail;
		first->next = NULL;
		ptr->tail = first;
	}
}

void	ra(t_data *data)
{
	rotate(data->a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_data *data)
{
	rotate(data->b);
	ft_putendl_fd("rb", 1);
}

void	rr(t_data *data)
{
	rotate(data->a);
	rotate(data->b);
	ft_putendl_fd("rr", 1);
}
