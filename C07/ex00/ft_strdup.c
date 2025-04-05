/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:42:36 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/10 14:00:27 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int		count;
	char	*dest;

	count = 0;
	while (src[count])
		count++;
	dest = (char *)malloc((count + 1) * sizeof(char));
	if (!dest)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

void ft_strcpy(char *dest, char *src)
{
	int	index;

	index = -1;
	while (src[++index])
		dest[index] = src[index];
	dest[index] = '\0';
}
