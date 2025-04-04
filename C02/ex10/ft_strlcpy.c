/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:00:15 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/02 15:39:03 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	length;

	i = 0;
	if (size == 0)
	   return (ft_strlen(src));
	length = size - 1;
	while (src[i] && length--)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

unsigned int	ft_strlen(char *str)
{
	int				i;
	unsigned int	count;

	count = 0;
	i = -1;
	while (str[++i])
		count++;
	return (count);
}