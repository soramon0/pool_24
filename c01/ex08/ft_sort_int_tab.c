
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
  int j;

  if (size <= 1)
    return ;
  i = 0;
  while(i < size)
  {
    j = i;
    while(tab[j] > tab[j + 1])
    {
      ft_swap(&tab[j], &tab[j + 1]);
      j++;
    }
    i++;
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
