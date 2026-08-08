//#include <stdio.h>
//#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  size_t i = 0;
  size_t j = 0;

  if (!needle[i])
    return (char *)haystack;

  while(i < len && haystack[i])
  {
    j = 0;

    while (i + j < len && haystack[i + j] == needle[j])
        j++;
    
    if (!needle[j])
      return ((char *)&haystack[i]);
    
    i++;
  }

  return (NULL);
}

/*int main(void)
{
  char hay[] = "Foo Bar Baz";
  char ned[] = "Bar";

  char *res = ft_strnstr(hay, ned, 10);
  char *res_built_in = strnstr(hay, ned, 10);

  printf("string: %s\n", res);
  printf("char: %c\n", *res);
  printf("adress: %p\n", (void *)res);
  printf("string: %s\n", res_built_in);
  printf("char: %c\n", *res_built_in);
  printf("adress: %p\n", (void *)res_built_in);
  
}*/
