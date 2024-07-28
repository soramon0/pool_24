int ft_is_printable(char c)
{
  /* printable characters are those from 32 through 126 */
  if (c >= 32 && c <= 126)
    return 1;
  return 0;
}

int ft_str_is_printable(char *str)
{
  while (*str != '\0')
  {
    if (ft_is_printable(*str) == 0)
      return 0;
    str++;
  }

  return 1;
}

/*
int main()
{
  printf("%d\n", ft_str_is_printable("lkjKDSJ2315464,,.'];"));
  return 0;
}
*/
