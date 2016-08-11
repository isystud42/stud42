/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 02:53:49 by isy               #+#    #+#             */
/*   Updated: 2016/08/11 05:14:15 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

int main()
{
    char str[] = "MAMAN";

    printf("%s", ft_strlowcase(str));
    return (0);
}
