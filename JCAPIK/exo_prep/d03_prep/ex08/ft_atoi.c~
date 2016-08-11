/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 07:02:49 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/08 00:56:30 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_getlen(char *str)
{
    int i;

    i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    i--;
    return (i);
}

char	ft_getnum(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		
}

void	ft_putchar(char c);

int     ft_atoi(char *str)
{
    int resultat;
    int longueur;
    int i;

    resultat = 0;
	longueur = 0;
	i = ft_genlen(str);
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
