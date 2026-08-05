size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
  size_t i = 0;
  size_t copied = 0;

  while (src[i])
  {
    if (dstsize != 0 && copied < dstsize - 1)
    {
      dst[copied] = src[copied];
      copied++;
    }
    i++;
  }
  if (dstsize != 0)
    dst[copied] = '\0';
  
  return (i);
}

