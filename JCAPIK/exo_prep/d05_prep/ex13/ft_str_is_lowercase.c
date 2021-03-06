/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 10:20:13 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/10 10:20:20 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 122 && str[i] < 97)
            return (0);
        i++;
    }
    return(1);
}
