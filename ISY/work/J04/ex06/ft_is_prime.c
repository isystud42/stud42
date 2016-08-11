/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 05:19:34 by isy               #+#    #+#             */
/*   Updated: 2016/08/09 16:30:40 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checking(int a , int nb)
{
	if (a > nb / 2)
	{	
		return (1);
	}
	else if (nb % a == 0)
	{
		return (0);
	}
	return (ft_checking(a + 1, nb));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
	{	
		return(0);
	}
	return (ft_checking(2 ,nb));
}
