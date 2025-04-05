/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:04:44 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/10 14:00:05 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	ret_len;
	int	*array;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	length = (max - min);
	ret_len = length;
	array = (int *)malloc(length * sizeof(int));
	if (!array)
		return (0);
	*range = array;
	while (length--)
		array[length] = --max;
	return (ret_len);
}
