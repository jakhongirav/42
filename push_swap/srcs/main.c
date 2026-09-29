/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:10:15 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/08/28 18:06:02 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(void)
{
	t_data	*data;
	t_stack	*tmp;

	data = malloc(sizeof(t_data));
	if (!(data))
		return (1);
	data->a = malloc(sizeof(t_stack));
	if (!(data->a))
		return (1);
	tmp = add_node(data->a, 45);
	if (!tmp)
		return (1);
	data->a = tmp;
	tmp = add_node(data->a, 10);
	if (!tmp)
		return (1);
	data->a = tmp;
	tmp = add_node(data->a, 20);
	if (!tmp)
		return (1);
	data->a = tmp;
	printf("%d\n", data->a->head->data);
	printf("%d\n", data->a->tail->data);
	rotate(data->a);
	printf("%d\n", data->a->head->data);
	printf("%d\n", data->a->tail->data);
	return (0);
}
