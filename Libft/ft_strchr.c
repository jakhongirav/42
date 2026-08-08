//#include <stdio.h>
//#include <string.h>
char *ft_strchr(const char *s, int c)
{
  size_t i = 0;
  
  while(s[i])
  {
    if (s[i] == c)
      return ((char *)&s[i]);
    i++;
  }
  
  return (NULL);
}

/*int main(void)
{
  int test = 97;
  char str[] = "Hellooa";

  char *result = ft_strchr(str, test);
  char *result_built_in = strchr(str, test);

  printf("character: %c\n", *result);
  printf("string: %s\n", result);
  printf("address: %p\n", (void *)result);
  printf("built in function: %c\n", *result_built_in);
}*/
