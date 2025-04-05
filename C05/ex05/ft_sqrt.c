/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:10:54 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/07 23:12:50 by yosherau         ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int nbr;

	nbr = 0;
	while (nbr * nbr <= nb)
	{
		if (nbr * nbr == nb)
			return (nbr);
		nbr++;
	}
	return (0);
}
