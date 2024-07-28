#include "ft_putchar.h"

void print_row(int i, int x, int j, int y)
{
  // top left
  if (i == 0 && j == 0)
    ft_putchar('A');
  // top right
  else if (j == 0 && i == x - 1)
    ft_putchar('C');
  // bottom left
  else if (i == 0 && j == y - 1)
    ft_putchar('A');
  // bottom right
  else if (i == x - 1 && j == y - 1)
    ft_putchar('C');
  // inside
  else
    ft_putchar('B');
}

void print_col(int i, int x)
{
  // start and end 
  if (i == 0 || i == x - 1)
    ft_putchar('B');
  // inside
  else 
    ft_putchar(' ');
}

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    ft_putchar(str[i]);
    i++;
  }
}

void  rush(int x, int y)
{
  int i;
  int j;

  if (x <= 0 || y <= 0)
  {
    ft_putstr("x or y can not be less than or equal to 0\n");
    return ;
  }
  j = 0;
  while(j < y)
  {
    i = 0;
    while (i < x)
    {
      if (j == 0 || j == y - 1)
        print_row(i, x, j, y);
      else
        print_col(i, x);
      i++;
    }
    ft_putchar('\n');
    j++;
  }
}
