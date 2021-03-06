/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 07:17:31 by isy               #+#    #+#             */
/*   Updated: 2016/08/10 07:35:49 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);
{
	int i = 0;
	while (src[i] != "\0")
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i]= src[i];
	return (*dest) ;
}
