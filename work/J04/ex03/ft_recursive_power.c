/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 00:33:38 by isy               #+#    #+#             */
/*   Updated: 2016/08/09 00:46:25 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power);
{
	int compteur;

	compteur = power;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power >= 2)
	{
		nb = nb * nb;
		power += -1;
		ft_recursive_power(nb,power);
	}
	return (nb)
}
