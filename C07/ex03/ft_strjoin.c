/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:03:17 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/10 23:52:19 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char **strs, int size);
void	ft_putstr(char *deast, char **strs, int size, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		row;
	int		count;
	int		index;
	char	*dest;

	count = ft_strlen(strs, size);
	dest = (char *) malloc(count + size);
	row = 0;
	index = 0;
	ft_putstr(dest, strs, size, sep);
	return (dest);
}

int	ft_strlen(char **strs, int size)
{
	int	row;
	int	count;
	int	column;

	row = 0;
	column = 0;
	count = 0;
	while (row < size)
	{
		column = 0;
		while (strs[row][column])
		{
			count++;
			column++;
		}
		row++;
	}
	return (count);
}

void	ft_putstr(char *dest, char **strs, int size, char *sep)
{
	int	row;
	int	column;
	int	index;

	row = 0;
	index = 0;
	while (row < size)
	{
		column = 0;
		while (strs[row][column])
		{
			dest[index++] = strs[row][column];
			column++;
		}
		row++;
		column = 0;
		while (sep[column])
		{
			if (row != size)
				dest[index++] = sep[column];
			column++;
		}
	}
	dest[index] = '\0';
}

/*
int	main(void)
{
	char **str = (char **)malloc(3 * sizeof(char *));
	str[0] = "1";
	str[1] = "2";
	str[2] = "3";

	printf("%s", ft_strjoin(3, str, ","));
}
*/
