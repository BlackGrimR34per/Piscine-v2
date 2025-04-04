/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:40:32 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/03 11:12:49 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length;

	length = ft_strlen(dest);
	if (length > size)
		return (size);
	while (length < size - 1)
		dest[length++] = *src++;
	dest[length] = '\0';
	return (length);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}
