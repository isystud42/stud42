/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 05:19:38 by isy               #+#    #+#             */
/*   Updated: 2016/08/11 06:59:27 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' &&  str[i] <= 'z')
			{
				if (str[i] < 'A' || str[i] > 'Z')
				{
					str[i] = str[i] - 32;
				}
	 		}
		}
		i += 1;
		if (str[i] >= 'a' &&  str[i] <= 'z')
		{
			if (str[i-1] < 'a' || str[i-1] > 'z')
			{
				if (str[i-1] < 'A' || str[i-i] > 'Z')
				{
					if(str[i+1] >= 'a' && str[i+1] <= 'z')
						str[i] += -32;
				}
			}
		}
		i += 1;
	}
	return str;
}

int main()
{
	char str[] = "  maman ++ 45lol -Mdeir -samere !ls";

    printf("%s", ft_strcapitalize(str));
    return (0);
}
