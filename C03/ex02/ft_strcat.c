/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:54:13 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/10 15:46:34 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	index;

	index = 0;
	while (dest[index])
		index++;
	while (*src)
		dest[index++] = *src++;
	dest[index] = '\0';
	return (dest);
}
