/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 18:00:56 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/04 19:18:49 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (int argc, char *argv[])
{
	int i = 0;
	int C = 122;
	while ( C >= 97 )
	{
		ft_putchar(C);
		C--;
	}
	return (0);
}
