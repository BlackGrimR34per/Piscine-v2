/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:03:28 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/05 15:42:40 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr_base(int nbr, char *base);
int     ft_base_checker(char *base, int count);
int     ft_strchr(char *str, char c);
void    ft_putchar(char c);

void    ft_putnbr_base(int nbr, char *base)
{
    int count;

    count = 0;
    while (base[count])
        count++;
    if (count <= 1 || ft_base_checker(base, count))
        return ;
    if (nbr == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nbr < 0)
    {
        nbr *= -1;
        ft_putchar('-');
    }
    if (nbr >= count)
    {
        ft_putnbr_base(nbr / count, base);
        nbr %= count;
    }
    if (nbr < count)
        ft_putchar(base[nbr]);
}

int ft_base_checker(char *base, int count)
{
    int i;

    i = -1;
    while (base[++i])
    {
        if (base[i] == 43 || base[i] == 45)
            return (0);
    }
    i = -1;
    while (++i < count - 1)
        
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strchr(char *str, char c)
{
    while (*str)
    {
        if (*str == c)
            return (1);
    }
    return (0);
}

int main()
{
    ft_putnbr_base(10, "10");
}