#include "libft.h"

char  **ft_split(char const *s, char c)
{
  size_t  i;
  size_t  j;
  size_t  wcount;
  size_t  start;
  size_t  end;
  char    *word;
  char    **res;

  wcount = 0;
  start = 0;

  while (s[start])
  {
    while (s[start] == c)
      start++;

    end = start;
    while (s[end] && s[end] != c)
      end++;

    if (end - start > 0)
      wcount++;

    start = end;
  }

  res = malloc((wcount + 1) * sizeof(char *));
  if (!res)
    return (NULL);

  start = 0;
  i = 0;
  while (s[start])
  {
    while (s[start] == c)
      start++;
   
    printf("start at index: %zu\n", start);

    end = start;
    while (s[end] && s[end] != c)
      end++;

    printf("end at index: %zu\n", end);
    
    if (end - start > 0)
    {
      word = malloc(end - start + 1);
      if (!word)
      {
        return (NULL);
        while (i >= 0)
        {
          free(res[i]);
          i--;
        }
        free(res);
      }

      j = 0;
      while (start < end)
        word[j++] = s[start++];

      word[j] = '\0';
     
      res[i] = word;
      i++;
    }
    printf("word: %s\n", word);
  }
  res[i] = NULL;
  return (res);
}

int main(void)
{
  char  *arr = "   Hello World  ";
  char  sign = ' ';

  ft_split(arr, sign);
  return (0);
}
