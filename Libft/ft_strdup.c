#include <stdlib.h>

char  *ft_strdup(const char *s1)
{
  size_t i = 0;
  size_t len = 0;
  char *s2;

  len = ft_strlen(s1);

  s2 = malloc(len + 1);
  if (!s2)
    return (NULL);

  while (i < len)
  {
    s2[i] = s1[i];
    i++;
  }

  s2[i] = '\0';

  return (s2);

}
