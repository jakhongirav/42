/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahongirabdujalilov <jabdujal@student.42r  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 01:18:09 by jahongirabduj     #+#    #+#             */
/*   Updated: 2026/08/18 01:24:18 by jahongirabduj    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_striteri(char *s, void (*f)(unsigned int, char*))
{
  size_t  i;

  i = 0;
  while (s[i])
  {
    f(i, &s[i]);
    i++;
  }
}
