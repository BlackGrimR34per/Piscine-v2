/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 00:26:42 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/09 18:50:32 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	partition(int arr[], int start, int end)
{
	int	pivot;
	int	i;
	int	j;

	pivot = arr[end];
	i = start - 1;
	j = start;
	while (j <= end - 1)
	{
		if (arr[j] < pivot)
		{
			i++;
			ft_swap(&arr[i], &arr[j]);
		}
		j++;
	}
	i++;
	ft_swap(&arr[i], &arr[end]);
	return (i);
}

void	quicksort(int arr[], int start, int end)
{
	int	pivot;

	if (end <= start)
		return ;
	pivot = partition(arr, start, end);
	quicksort(arr, start, pivot - 1);
	quicksort(arr, pivot + 1, end);
}

void	ft_sort_int_tab(int *tab, int size)
{
	quicksort(tab, 0, size - 1);
}
