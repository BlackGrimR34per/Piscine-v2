/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:48:32 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/07 22:43:08 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	value;

	value = 1;
	if (nb < 0)
		return (0);
	while (nb)
		value *= nb--;
	return (value);
}
