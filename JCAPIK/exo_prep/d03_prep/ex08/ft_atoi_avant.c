/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 07:02:49 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/07 08:58:49 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

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

int ft_atoi(char *str)
{
	int sub[ft_getlen(str)];
	int i;
	int j;
	int l;

	i = ft_getlen(str);
	j = 0;
	l = 0;
	while(i >= j)
	{
		if (str[j] < 58 && str[j] > 47)
		{
			sub[l] = str[j] - 48;
			l++;
		}
		j++;
	}
	sub[l] = '\0';
	return (*sub);
}

int main(void)
{
	char *str;
	
	str = "35bidule65";
	printf("boudiou\n");
	printf("%s", ft_atoi(str));
	return (0);
}
