/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 10:25:54 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/10 10:27:38 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
		if (str[i] < 32 && str[i] == 127)
            return (0);
		i++;
    }
    return(1);
}
