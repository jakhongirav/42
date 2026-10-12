/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:34:49 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/10/12 14:16:46 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char val)
{
	return (write(1, &val, 1));
}

int	print_str(char *val)
{
	if (!val)
		return (write(1, "(null)", 6));
	return (write(1, val, ft_strlen(val)));
}
