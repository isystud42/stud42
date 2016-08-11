/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 13:41:48 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/11 15:27:52 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_arr_assign(char *str1, char *str2, int *a, int *b)
{
	while (*b <= *a)
	{
		str1[*a] = str2[*a];
		*a += 1;
	}
	a--;
	return (*a);
}

void    ft_swap(char *a, char *b)
{
    char c;

    c = *a;
    *a = *b;
    *b = c;
}

int		ft_getlen(char *str)
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

const char	*ft_strrev(char *str)
{
	int			i;
	int			j;
	char		temstr[ft_getlen(str)];

	j = 0;
	i = ft_getlen(str);
	while (i >= 0)
	{
		temstr[j] = str[i];
		j++;
		i--;
	}
	printf("%s ", temstr);
	i = 0;
	while(str[i] != '\0')
	{
		str[i] = temstr[i];
		i++;
	}
	return (str);
}

int		main(void)
{
	printf("%s", ft_strrev("abcdefg"));
	return (0);
}
