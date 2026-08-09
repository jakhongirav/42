//#include <stdio.h>
//#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t i = 0;
  
  while(i < n)
  {
    if (s1[i] - s2[i] != 0)
      return (s1[i] - s2[i]);

    if (!s1[i] && !s2[i])
      return (0);
    i++;
  }

  return (0);
}

/*int main(void)
{
  char test[] = "abcd";
  char test1[] = "abcx";
 
  printf("my beloved function: %i\n", ft_strncmp(test, test1, 4));
  printf("built in function: %i\n", strncmp(test, test1, 4));
}*/
