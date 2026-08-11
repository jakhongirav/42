#include <stdlib.h>
#include <stdint.h>

void  *ft_calloc(size_t count, size_t size)
{
  size_t i = 0;
  char *ptr;

  if (size != 0 && count > SIZE_MAX / size)
      return (NULL); 

  ptr = malloc(count * size);
  if (!ptr)
    return (NULL);

  while (i < (count * size))
  {
    ptr[i] = 0;
    i++;
  }

  return (ptr);
}
