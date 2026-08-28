/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:11:39 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/08/28 17:46:21 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/*void	swap(t_stack_node **ptr)
{
	t_stack_node	*tmp;

	tmp = *ptr->next;
	*ptr = *ptr->next;
	*ptr->prev = NULL;
	*ptr->next = tmp;
}*/

t_stack	*add_node(t_stack *ptr, int value)
{
	t_stack_node	*temp;

	temp = malloc(sizeof(t_stack_node));
	if (!temp)
		return (NULL);
	temp->data = value;
	if (!(ptr->head))
	{
		temp->prev = NULL;
		temp->next = NULL;
		ptr->head = temp;
		ptr->tail = temp;
	}
	else
	{
		temp->prev = ptr->tail;
		temp->next = NULL;
		ptr->tail->next = temp;
		ptr->tail = temp;
	}
	ptr->size += 1;
	return (ptr);
}
