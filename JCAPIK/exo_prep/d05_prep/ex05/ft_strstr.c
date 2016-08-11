/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 04:33:06 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/10 04:52:28 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_check(char *str, char *to_find, int i, int j)
{
	if (to_find[j] == '\0')
		return (0);
	else if (str[i] != to_find[j])
		return(1);
	return (ft_check(str, to_find, i + 1, j + 1));

int *ft_strstr(char *str, char *to_find)
{
	int i;
	int a;

	i = 0;
	while (str[i] != '\0')
	{
		a = ft_check(str, to_find, i, 0);
		if (a = 0)
			return (to_find);
		i++;
	}
	return(0);
}
