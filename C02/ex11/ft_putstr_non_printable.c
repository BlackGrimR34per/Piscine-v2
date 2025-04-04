/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:39:42 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/02 19:35:03 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_decimal_to_hex(char c);
void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
			ft_decimal_to_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	ft_decimal_to_hex(char c)
{
	int		i;
	char	*hex_base;

	i = c;
	hex_base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex_base[i / 16]);
	ft_putchar(hex_base[i % 16]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
