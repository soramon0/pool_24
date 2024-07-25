
#include <stdio.h>
void ft_swap(int *a, int *b)
{
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp; 
}

void  ft_sort_int_tab(int *tab, int size)
{
  int i;

  if (size <= 1)
    return ;
  i = 0;
  while(size >= 0)
  {
    while (i < size - 1)
    {
      if (tab[i] > tab[i + 1])
      {
        ft_swap(&tab[i], &tab[i + 1]);
      }
      i++;
    }
    size--;
  }
}

int main()
{
  int a[10] = {1,5,-10,2,3,10,14,0,99,47};
  ft_sort_int_tab(a, 10);
  int i = 0;
  while(i < 10)
  {
    printf("%d\n", a[i]);
    i++;
  }
  return 0;
}
