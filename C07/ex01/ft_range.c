/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:30:12 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/10 12:00:05 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	*array;

	if (min >= max)
		return (0);
	length = (max - min);
	array = (int *)malloc(length * sizeof(int));
	if (!array)
		return (0);
	while (length--)
		array[length] = --max;
	return (array);
}
