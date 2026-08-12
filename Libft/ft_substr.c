#include "libft.h"

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t slen;
  size_t i;
  char *res;
  
  slen = ft_strlen(s);
  i = 0;

  if (start >= slen)
    len = 0;
  else if (len > slen - start)
    len = slen - start; 

  res = malloc(len + 1);
  if (!res)
    return (NULL);

  while (i < len)
  {
    res[i] = s[start + i];
    i++;
  }

  res[i] = '\0';

  return (res);
}
