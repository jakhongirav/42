/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:25:32 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/10/02 16:27:01 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static	void	push(t_stack *src, t_stack *dst)
{
	t_stack_node	*tmp;

	if (src->head)
	{
		tmp = src->head;
		src->head = src->head->next;
		src->size -= 1;
		if (src->head)
			src->head->prev = NULL;
		add_front(dst, tmp);
	}
}

static	void	add_front(t_stack	*dst, t_stack_node *node)
{
	if (!dst->size)
	{
		node->prev = NULL;
		node->next = NULL;
		dst->head = node;
		dst->tail = node;
		dst->size += 1;
	}
	else
	{
		node->next = dst->head;
		dst->head->prev = node;
		dst->head = node;
		dst->size += 1;
	}
}

void	pa(t_data *data)
{
	push(data->b, data->a);
	ft_putendl_fd("pa", 1);
}

void	pb(t_data *data)
{
	push(data->a, data->b);
	ft_putendl_fd("pb", 1);
}
