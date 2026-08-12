int ft_atoi(const char *str)
{
  int i = 0;
  int mc = 1;
  int res = 0;

  while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    i++;

  if (str[i] == '-' || str[i] == '+') 
  {
    if (str[i] == '-')
      mc = -1;
    i++;
  }

  while (str[i] >= '0' && str[i] <= '9')
  {
    res = (res * 10) + (str[i] - '0');
    i++;
  }

  return (res * mc);
}
