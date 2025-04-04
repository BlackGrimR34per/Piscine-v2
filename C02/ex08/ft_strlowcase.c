/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:50:20 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/02 12:18:29 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);
int		ft_char_is_lowercase(char c);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_char_is_lowercase(str[i]))
			str[i] += 32;
	}
	return (str);
}

int	ft_char_is_lowercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
