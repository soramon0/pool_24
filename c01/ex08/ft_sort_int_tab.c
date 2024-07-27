
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
  int swapped;

  if (size <= 1)
    return ;
  i = 0;
  while(i < size - 1)
  {
    j = 0;
    swapped = 0;
    printf("PASS = %d\n", i);
    while (j < size - i - 1)
    {
      if (tab[j] > tab[j + 1]) {
        ft_swap(&tab[j], &tab[j + 1]);
        swapped = 1;
      }
      j++;
    }
    if (swapped == 0)
      break;
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
    printf("%d ", a[i]);
    i++;
  }
  return 0;
}
