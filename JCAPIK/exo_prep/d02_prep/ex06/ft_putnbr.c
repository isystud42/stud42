/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 12:47:31 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/05 23:54:01 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_poun(int n)
{
	int poun;
    if (n < 0)
    {
		return (-1);
    }
    else if (n > 0)
    {
		return (1);
    }
    else
    {
		return (0);
	}
}

int initia_str(char &string)
{
	int i;

	i = 0;
	while (i < 4)
	{
		*string[i] = ' ';
	}
}

void ft_putnbr(int n)
{
	int o;
	int m;
	int i;
	int string[5];
	int div;

	div = 10;
	n = 9;
	count = 0;
	i = initia_str(string);
	o = ft_poun(n);
	if (o == 0)
	{
		ft_putchar('0');
		return (0);
	}
	
	while (count <= 4)
	{
		while ((n - m) * i % div != 0)
		   {
			   string[count] = n + 48;
			   m--;
		   }
		count++;
	}
