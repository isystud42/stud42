/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 06:06:50 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/08 09:31:20 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    if (index < 0)
    {
        return(-1);
	}
	if (index <= 1)
	{
		return(index);
	}
	return(ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
