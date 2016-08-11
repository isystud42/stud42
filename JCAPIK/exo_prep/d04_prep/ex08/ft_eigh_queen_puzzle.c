/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eigh_queen_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 12:46:39 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/09 00:32:48 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_check_pos(char *str, int len, int pos, int a)
{
	int j;

	j = len;
	while (j >= -1)
	{
		if (len - 1 == str[pos])
			a++;
		else if (str[pos - j] == len - j)
			a++;
		else if (str[pos + j] == len + j)
            a++;
		else if (str[pos + j] == len - j)
            a++;
		else if (str[pos - j] == len + j)
            a++;
		j--;
	}
	if (a > 1)
		return (0);
	if (str[pos] > len - 1)
		return (ft_check_pos(str, len, pos + 1, a));
	return(1);
}

int		ft_move_in_line(char *str, int len, int pos)
{

}

int		ft_recu(char *str, int len, int pos, int i)
{
	printf("len = %d, i = %d\n", len,  i);
	if (len < 1)
		return(i);
	if (1 == ft_check_pos(str, len, pos, 0))       // check if the position is ok
		i++;

	return(ft_recu(str, len - 1, pos, i));         // 
}

int		ft_eight_queens_puzzle(void)
{
	int len = 8;
	char str[len];
	
	while (len >= 1)
	{
		str[len - 1] = '0';
		len--;
	}
	len = 8;
	return(ft_recu(str, len, 0, 0));
}

int		main(void)
{
	printf("result = %d", ft_eight_queens_puzzle());
	return(0);
}
