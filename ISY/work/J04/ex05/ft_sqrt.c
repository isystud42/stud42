/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 03:20:28 by isy               #+#    #+#             */
/*   Updated: 2016/08/09 05:15:19 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int moitier;
	int rest;

	moitier = nb / 2;
	rest = nb * 10;
	rest = rest % 10;
	if (rest != 0 || nb < 0)
	{
		return (0);
	}
	while (nb != moitier * moitier)
	{
		moitier += -1;
		if (moitier <= (0))
		{
			return (0);
		}
	}
	return (moitier);
}
