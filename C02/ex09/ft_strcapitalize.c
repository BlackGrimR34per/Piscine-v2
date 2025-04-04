/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:20:08 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/02 19:33:58 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		ft_char_is_alphanum(char c);
int		ft_char_is_alpha(char c);
int		ft_char_is_digit(char c);
int		ft_char_is_lower(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_char_is_alphanum(str[i - 1]))
		{
			if (ft_char_is_lower(str[i]))
				str[i] -= 32;
		}
		else
		{
			if (ft_char_is_alpha(str[i]) && !ft_char_is_lower(str[i]))
				str[i] += 32;
		}
	}
	return (str);
}

int	ft_char_is_alphanum(char c)
{
	if (ft_char_is_alpha(c) || ft_char_is_digit(c))
		return (1);
	return (0);
}

int	ft_char_is_alpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	ft_char_is_digit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_char_is_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
