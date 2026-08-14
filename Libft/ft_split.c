#include "libft.h"

static void	free_split(char **res, size_t i)
{
	while (i > 0)
	{
		i--;
		free(res[i]);
	}
	free(res);
}

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

  if (!s)
    return (NULL);

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

  res = malloc((wcount + 1) * sizeof(*res));
  if (!res)
    return (NULL);

  start = 0;
  i = 0;
  while (s[start])
  {
    while (s[start] == c)
      start++;
   
    end = start;
    while (s[end] && s[end] != c)
      end++;
    
    if (end - start > 0)
    {
      word = malloc(end - start + 1);
      if (!word)
      {
        free_split(res, i);   
        free(res);
        return (NULL);
      }

      j = 0;
      while (start < end)
        word[j++] = s[start++];

      word[j] = '\0';
     
      res[i] = word;
      i++;
    }
  }
  res[i] = NULL;
  return (res);
}
