/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:34 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/01 19:08:48 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = -1;
	while (src[++index])
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
