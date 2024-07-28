int ft_is_alpha(char c)
{
  if (c >= 'a' && c <= 'z')
    return 1;
  return 0;
}

int ft_str_is_lowercase(char *str)
{
  while (*str != '\0')
  {
    if (ft_is_alpha(*str) == 0)
      return 0;
    str++;
  }

  return 1;
}

/*
int main()
{
  printf("%d\n", ft_str_is_lowercase(""));
  return 0;
}
*/
