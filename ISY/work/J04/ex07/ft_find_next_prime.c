/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 10:46:32 by isy               #+#    #+#             */
/*   Updated: 2016/08/09 10:58:56 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_checking(int a , int nb)
{
    if (a > nb / 2)
    {
        printf("1");
        return (1);
    }
    else if  (nb % a == 0)
    {
        printf("0");
        return (0);
    }
    return(ft_checking(a+1, nb));
}

int ft_is_prime(int nb)
{
    if(nb <= 1)
    {
        return(0);
    }
    return(ft_checking(2 ,nb));
}

int ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb += 1;
	}
	printf(" %d " , nb);
	return 0 ;
}

int main()
{
	ft_find_next_prime(1);
	return 0 ;
}
