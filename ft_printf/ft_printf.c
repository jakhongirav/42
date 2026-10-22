/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabdujal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:00:57 by jabdujal          #+#    #+#             */
/*   Updated: 2026/10/22 15:41:25 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_dispatch(char sign, va_list *args)
{
	if (sign == 'c')
		return (print_char(va_arg(*args, int)));
	if (sign == '%')
		return (print_char('%'));
	if (sign == 's')
		return (print_str(va_arg(*args, char *)));
	if (sign == 'd' || sign == 'i')
		return (print_nbr(va_arg(*args, int)));
	if (sign == 'u')
		return (print_base(va_arg(*args, unsigned int), DEC, 10));
	if (sign == 'x')
		return (print_base(va_arg(*args, unsigned int), HEX_LO, 16));
	if (sign == 'X')
		return (print_base(va_arg(*args, unsigned int), HEX_UP, 16));
	if (sign == 'p')
		return (print_ptr(va_arg(*args, void *)));
	return (0);
}

static int	handle_char(const char *format, int *i, va_list *args)
{
	if (format[*i] == '%' && format[*i + 1])
		return (ft_dispatch(format[++*i], args));
	else
		return (print_char(format[*i]));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		ret;
	int		i;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	ret = 0;
	i = 0;
	while (format[i])
	{
		ret = handle_char(format, &i, &args);
		if (ret < 0)
			break ;
		count += ret;
		i++;
	}
	va_end(args);
	if (ret < 0)
		return (-1);
	return (count);
}
