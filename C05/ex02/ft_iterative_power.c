/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:47:48 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/07 22:50:49 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int value;

	value = 1;
	if (power < 0)
		return (0);
	while (power--)
		value *= nb;
	return (value);
}
