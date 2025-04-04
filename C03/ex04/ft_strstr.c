/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:42:32 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/03 10:39:59 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int	length;

	length = ft_strlen(to_find);
	if (length <= 0)
		return (str);
	while (*str)
	{
		if (ft_strncmp(str, to_find, length) == 0)
			return (str);
		else
			str++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] && s2[i] && --n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}
