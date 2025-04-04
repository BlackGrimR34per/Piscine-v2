/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:11:42 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/02 12:18:56 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);
int		ft_char_is_lowercase(char c);

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_char_is_lowercase(str[i]))
			str[i] -= 32;
	}
	return (str);
}

int	ft_char_is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
