//#include <stdio.h>
//#include <string.h>

char *ft_strrchr(const char *s, int c)
{
  int i = 0;

  while(s[i])
    i++;
  
  while(i >= 0)
  {
    if (s[i] == c)
      return ((char *)&s[i]);
    i--;
  }
  
  return (NULL);
}

/*int main(void)
{
  int num = 97;
  char test[] = "Heallooa";
  
  char *result = ft_strrchr(test, num);
  char *result_built_in = strrchr(test, num);
  
  printf("string: %s\n", result);
  printf("char: %c\n", *result);
  printf("adress: %p\n", (void *)result);
  printf("string: %s\n", result_built_in);
  printf("char: %c\n", *result_built_in);
  printf("adress: %p\n", (void *)result_built_in);
}*/
