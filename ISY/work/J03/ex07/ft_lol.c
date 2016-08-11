/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lol.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 04:55:54 by isy               #+#    #+#             */
/*   Updated: 2016/08/07 06:32:54 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char temp[] = str;
	i = 0;
	j = 0;
	
	while(str[i] != '\0')
	{
		i += 1;
	}
	i += -1;
	while(i > 0)
	{
		temp[j] = str[j];
		str[j] = str[i];
		str[1] = temp[j];
		i += -1;
		j += 1;
	}
	printf("str = %s \n", str);
	return str ;
}

int main()
{
	ft_strrev("acd");
	return 0;
}
