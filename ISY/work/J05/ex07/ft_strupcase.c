/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 01:11:51 by isy               #+#    #+#             */
/*   Updated: 2016/08/11 01:24:32 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
    int compteur_1;
    int compteur_2;
    int i;
    int resultat;
    int j;

    compteur_1 = 0;
    compteur_2 = 0;
    i = 0;
    while(s1[i] != '\0' || i <= n)
    {
        compteur_1 += s1[i];
        i += 1;
    }
    j = 0;
    while(s2[j] != '\0' || i <= n)
    {
        compteur_2 += s2[j];
        j += 1;
    }
    resultat = compteur_1 - compteur_2;
    printf("%d ", resultat);
    return (resultat);
}
