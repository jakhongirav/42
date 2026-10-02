/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:54:04 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/10/02 16:27:29 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

// Swap
static	void	swap(t_stack *ptr)
{
	int	tmp;

	if (ptr->head && (ptr->head)->next)
	{
		tmp = (ptr->head->data);
		ptr->head->data = (ptr->head)->next->data;
		(ptr->head)->next->data = tmp;
	}
}

void	sa(t_data *data)
{
	swap(data->a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_data *data)
{
	swap(data->b);
	ft_putendl_fd("sb", 1);
}

void	ss(t_data *data)
{
	swap(data->a);
	swap(data->b);
	ft_putendl_fd("ss", 1);
}
