/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:12:47 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/10/13 15:09:23 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_num(long num)
{
	char	c;
	int		len;
	int		tmp;

	len = 0;
	if (num >= 10)
	{
		len = print_num(num / 10);
		if (len < 0)
			return (-1);
	}
	c = (num % 10) + '0';
	tmp = write(1, &c, 1);
	if (tmp < 0)
		return (-1);
	return (len + tmp);
}

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
	tmp = print_num(num);
	if (tmp < 0)
		return (-1);
	return (len + tmp);
}
