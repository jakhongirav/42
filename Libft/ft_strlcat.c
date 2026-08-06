size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  size_t len_dst = 0;
  size_t len_src = 0;
  size_t i = 0;

  while (dst[len_dst])
    len_dst++;

  while (src[len_src])
    len_src++;

  if (len_dst >= dstsize)
    return (dstsize + len_src);

  while(src[i] && len_dst + i < dstsize - 1)
  {
    dst[len_dst + i] = src[i];
    i++;
  }

  dst[len_dst + i] = '\0';
  
  return (len_dst + len_src);
}


