void  *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
  size_t i = 0;

  unsigned char *dstptr = (unsigned char *)dst;
  const unsigned char *srcptr = (const unsigned char *)src;

  while(i < n)
  {
    dstptr[i] = srcptr[i];
    if (dstptr[i] == (unsigned char)c)
      return (&dstptr[i + 1]);
    i++;
  }

  return (NULL);
}
