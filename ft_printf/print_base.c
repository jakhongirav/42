/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:54:19 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/10/21 14:27:57 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_base(unsigned long long n, const char *b, unsigned long long l_b)
{
	int					len;
	int					tmp;
	char				c;

	len = 0;
	if (n >= l_b)
	{
		len = print_base(n / l_b, b, l_b);
		if (len < 0)
			return (-1);
	}
	c = b[n % l_b];
	tmp = write(1, &c, 1);
	if (tmp < 0)
		return (-1);
	return (len + tmp);
}
