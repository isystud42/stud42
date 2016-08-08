/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 10:03:43 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/08 12:41:19 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_checkdiv(int a, int nb)
{
	if (a >= nb / 2)
		return(1);
	else if (nb % a == 0)
		return (0);
	return(ft_checkdiv(a + 1, nb));
}

int ft_is_prime(int nb)
{
	if (nb <= 1)
		return(0);
	return(ft_checkdiv(2 , nb));
}

int ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
