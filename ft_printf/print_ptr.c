/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:32:42 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/10/21 18:29:32 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(void *via)
{
	int	len;
	int	tmp;

	if (via == NULL)
		return (write(1, "(nil)", 5));
	tmp = write(1, "0x", 2);
	if (tmp < 0)
		return (-1);
	len = print_base((unsigned long)via, HEX_LO, 16);
	if (len < 0)
		return (-1);
	return (len + tmp);
}
