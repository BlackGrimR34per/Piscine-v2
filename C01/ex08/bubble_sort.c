void	ft_swap(int *a, int *b);

void	bubble_sort(int *tab, int size)
{
	int	i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

void ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int main()
{
	int tab[5] = {5, 3, 1, 4, 2};
	bubble_sort(tab, 5);
	for (int i = 0; i < 5; i++)
		printf("%d ", tab[i]);
	return (0);
}