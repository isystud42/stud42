/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 00:37:31 by isy               #+#    #+#             */
/*   Updated: 2016/08/07 06:54:14 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i += 1;
	}
	return (i);
}
char	*ft_strrev(char *str)
{
	int i;
	int j;
	char swap[ft_strlen(&*str)];
	int k = ft_strlen(&*str);

	i = k;
	j = 0;
	while (j < k)
	{
		swap[j] = str[j];
		j += 1;
	}
	j = 0;

	while (i >= 0)
	{
		swap[i-1] = str[j];
		j++;
		i--;
	}
	j = 0;
	while (i <= k)
	{
		str[i] = swap[i];
		i += 1;
	}
	printf("str = %s", str);
	return (str);
}
int		main()
{
	char *str;
	str = "abcdef";

	ft_strrev(str);
	return(0);
}
