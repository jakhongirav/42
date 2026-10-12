/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabdujal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:33:57 by jabdujal          #+#    #+#             */
/*   Updated: 2026/10/11 16:19:01 by jabdujal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ret_ft;
	int	ret_orig;

	// Basic string test
	ret_ft = ft_printf("ft_printf: %s\n", "Hello, 42!");
	ret_orig = printf("   printf: %s\n", "Hello, 42!");
	printf("Counts -> ft: %d | orig: %d\n\n", ret_ft, ret_orig);

	// NULL string test
	ret_ft = ft_printf("ft_printf (NULL): %s\n", (char *)NULL);
	ret_orig = printf("   printf (NULL): %s\n", (char *)NULL);
	printf("Counts -> ft: %d | orig: %d\n", ret_ft, ret_orig);

	return (0);
}
