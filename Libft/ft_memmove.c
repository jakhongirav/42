void  *ft_memmove(void *dst, const void *src, size_t len)
{
  size_t i = 0;
  unsigned char *dstptr = (unsigned char *)dst;
  const unsigned char *srcptr = (const unsigned char *)src;

  if (dst < src)
  {
    while (i < len)
    {
      dstptr[i] = srcptr[i];
      i++;
    }
  } 
  else
  {
    while (len > 0)
    {
      len--;
      dstptr[len] = srcptr[len];
    }
  }
  
  return (dst);
}
