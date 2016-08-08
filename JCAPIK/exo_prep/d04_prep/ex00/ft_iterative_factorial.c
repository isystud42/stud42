/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 19:31:43 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/07 20:39:05 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_iterative_factorial(int nb)
{
	if ( nb > 1)
	{
		printf("nb1 = %d\n", nb);
		nb = nb * ft_iterative_factorial(nb - 1);
		printf("nb2 = %d\n", nb);
		return(nb);
	}
	else if (nb == 1)
	{
		printf("nb3 = %d\n", nb);
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	printf("%d", ft_iterative_factorial(20));
	return(0);
}
