/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabdujal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:33:57 by jabdujal          #+#    #+#             */
/*   Updated: 2026/10/21 18:41:19 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

#define T(...) do { \
	int a; int b; \
	printf("ft  ["); fflush(stdout); \
	a = ft_printf(__VA_ARGS__); \
	printf("] ret=%d\n", a); fflush(stdout); \
	printf("std ["); \
	b = printf(__VA_ARGS__); \
	printf("] ret=%d\n", b); \
	if (a != b) printf("  >>> RETURN MISMATCH\n"); \
	printf("\n"); \
} while (0)

int	main(void)
{
	int	x = 42;

	/* plain text */
	T("hello world");
	T("");
	/* %c and %% */
	T("%c", 'A');
	T("%c%c%c", 'a', 'b', 'c');
	T("%c", 0);
	T("%%");
	T("100%% sure %%");
	/* %s */
	T("%s", "hello");
	T("%s", "");
	T("%s", (char *)NULL);
	T("%s and %s", "one", "two");
	/* %d %i */
	T("%d", 0);
	T("%d", -1);
	T("%d", 42);
	T("%d", INT_MAX);
	T("%d", INT_MIN);
	T("%i", -2147483647);
	T("%i", 100000);
	/* %u */
	T("%u", 0);
	T("%u", 42);
	T("%u", UINT_MAX);
	T("%u", -1);
	/* %x %X */
	T("%x", 0);
	T("%x", 255);
	T("%X", 255);
	T("%x", -1);
	T("%X", UINT_MAX);
	T("%x", 3735928559u);
	T("%X", 3735928559u);
	/* %p */
	T("%p", &x);
	T("%p", (void *)0);
	T("%p", (void *)-1);
	T("%p", &main);
	/* mixed */
	T("%c|%s|%d|%i|%u|%x|%X|%p|%%", 'Z', "mix", -7, 7, 7u, 255, 255, &x);
	T("val=%d, hex=%x, str=%s!", 123, 123, "end");
	T("%d%d%d", 1, 2, 3);
	T("%s%s%s", "a", "b", "c");
	return (0);
}
