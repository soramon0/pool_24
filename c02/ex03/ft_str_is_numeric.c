int ft_is_digit(char c)
{
  if (c >= '0' && c <= '9')
    return 1;
  return 0;
}

int ft_str_is_numeric(char *str)
{
  while (*str != '\0')
  {
    if (ft_is_digit(*str) == 0)
      return 0;
    str++;
  }

  return 1;
}

/*
int main()
{
  printf("%d\n", ft_str_is_numeric("05123"));
  return 0;
}
*/
