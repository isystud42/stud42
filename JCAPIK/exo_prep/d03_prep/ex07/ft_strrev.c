/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 13:41:48 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/07 10:05:13 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

char	*ft_strrev(char *str)
{
	int			i;
	int			j;
	char		temstr[ft_getlen(str)];

	ft_putchar('2');
	j = 0;
	i = ft_getlen(str);
	while (i >= 0)
	{
		ft_swap(&temstr[i], &str[j]);
		j++;
		i--;
	}
	i = ft_getlen(str);
	j = 0;
	ft_arr_assign(str, temstr, &j, &i);
	return (str);
}

int		main(void)
{
	char *str;

	str = "abcdefghijk";
	ft_putchar('1');
	ft_strrev(str);
	return (0);
}
