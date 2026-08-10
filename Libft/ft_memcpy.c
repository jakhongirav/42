void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
  size_t i = 0;

  const unsigned char *srcptr = (const unsigned char *)src;
  unsigned char *dstptr = (unsigned char *)dst;

  while (i < n)
  {
    dstptr[i] = srcptr[i];
    i++;
  }

  return (dst);
}
