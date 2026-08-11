#include <stdlib.h>

void  *ft_calloc(size_t count, size_t size)
{
  char *ptr = malloc(count * size);
  size_t i = 0;

  while (i < (count * size))
  {
    ptr[i] = 0;
    i++;
  }

  return (ptr);
}
