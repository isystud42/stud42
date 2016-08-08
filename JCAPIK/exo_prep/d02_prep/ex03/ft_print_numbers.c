/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 19:30:38 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/04 21:02:03 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
    write(1, &c, 1);
	return(0);
}

int	ft_is_negative(int n)
{
    if ( n < 0 )
	{
		ft_putchar('N');
	}
	else if ( n > 0 )
	{
		ft_putchar('P');
	}
	return(0);
}
