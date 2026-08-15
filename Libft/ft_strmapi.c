#include "libft.h"

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  size_t  len;
  size_t  j;
  char    *res;

  len = ft_strlen(s); 
  
  res = malloc((i + 1) * sizeof(*res));
  if (!res)
    return (NULL);

  j = 0;
  while (j < i)
  {
    res[j] = f(j, s[j]);
    j++;
  }
  res[j] = '\0';

  return (res);
}  
