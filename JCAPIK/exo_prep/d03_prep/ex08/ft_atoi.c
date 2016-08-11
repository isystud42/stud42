/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 07:02:49 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/11 15:11:39 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_getlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	return (i);
}

int		ft_atoi(char *str)
{
	int resultat;
	int pouet;
	int i;

	resultat = 0;
	pouet = 1;
	i = ft_getlen(str);
	while (i >= 0)
	{
		resultat = resultat + (str[i] - 48) * pouet;
		i--;
		pouet = pouet * 10;
	}
	return (resultat);
}
