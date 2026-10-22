/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabdujal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:19:49 by jabdujal          #+#    #+#             */
/*   Updated: 2026/10/22 17:23:17 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define DEC "0123456789"
# define HEX_LO "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *type, ...);
int		print_char(char val);
int		print_str(const char *val);
int		print_base(unsigned long long n, const char *b, unsigned long long l_b);
int		print_nbr(int n);
int		print_ptr(void *via);

#endif
