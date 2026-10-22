/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:12:47 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/10/21 13:36:30 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n)
{
	long	num;
	int		len;
	int		tmp;

	num = n;
	len = 0;
	if (num < 0)
	{
		len = write(1, "-", 1);
		if (len < 0)
			return (-1);
		num = -num;
	}
	tmp = print_base(num, DEC, 10);
	if (tmp < 0)
		return (-1);
	return (len + tmp);
}
