/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabdujal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:00:57 by jabdujal          #+#    #+#             */
/*   Updated: 2026/10/11 18:10:10 by jabdujal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *type, ...)
{
	va_list		args;
	va_start	(args, count);
	int		c_count;
	int 		i;

	if (!type)
		return (-1);

	i = 0;
	while (type[i])
	{
		if (type[i] != '%')
		{
			ft_putchar_fd(type[i], 1);
			c_count++;
			i++;
		}
		else if (type[i] == '%' && type[i + 1])
		{
			c_count += ft_dispatch(type[i + 1], args);
			i+=2;
		}	
	}

	va_end(args);
	return (c_count);
}


int	static ft_dispatch(char type, va_list args)
{
	int	count;	
	
	if (type == 'c')
	{
		ft_putchar_fd((char)va_arg(args, int));
		count++;
	}
	else if (type == '%')
	{
		ft_putchar_fd('%', 1);
		count++;
	}
	else if (type == 's')
		count += print_str(va_arg(args, char *);
	else if (type == 'd' || type == 'i')
		count += ft_putnbr(va_arg(args, int));


	return (count);
}
