void ft_swap(int *a, int *b)
{
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp; 
}

void  ft_rev_int_tab(int *tab, int size)
{
  int i;

  if (size <= 1)
    return ;
  i = 0;
  while(i < size)
  {
    ft_swap(&tab[i], &tab[size - 1]);
    i++;
    size--;
  }
}
