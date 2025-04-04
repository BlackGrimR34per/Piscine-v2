/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:42:29 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/03 18:16:19 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nb);
void    ft_putchar(char c);

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        nb %= 10;
    }
    if (nb < 10)
        ft_putchar(nb + 48);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}