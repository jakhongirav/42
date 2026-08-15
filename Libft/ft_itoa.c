#include "libft.h"

int ft_dgtcount(long num)
{
  if (!num)
    return (1);

  int digit = 0;
  
  while (num)
  {
      digit++;
      num = num / 10;
  }
  return digit;
}

char  *ft_itoa(int num)
{
  char  *res;
  int   digits;
  int   sign;
  long  n = num;

  digits = ft_dgtcount(n);
  sign = (n < 0);

  res = malloc((digits + 1 + sign) * sizeof(*res));
  if (!res)
    return (NULL);

  if (sign)
  {
    res[0] = '-';
    n *= -1;
    digits += sign;
  }
  
  res[digits] = '\0';
  while (digits > sign)
  {
    digits--;
    res[digits] = n % 10 + '0'; 
    n /= 10;
  }
  return (res);
}
