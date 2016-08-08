/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:28:27 by isy               #+#    #+#             */
/*   Updated: 2016/08/07 21:47:07 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_atoi(char *str)
{
	int resultat;
	int longueur;
	int i;

	resultat = 0;
	longueur = 0;
	i = 0;

	while (str[longueur] != '\0')
	{
		longueur += 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + str [i] - 48;
		
	}
	return resultat ;
}

int main()
{
	printf("%d", ft_atoi("1234"));
	return 0 ;
}
