#include "libft.h"

void  *memset(void *b, int c, size_t len)
{
  size_t i = 0;
  unsigned char *ptr = (unsigned char *)b;

  while(i < len)
  {
    ptr[i] = (c + '0');
    i++;
  }

  return (b);
}
