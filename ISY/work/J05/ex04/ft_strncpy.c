/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 07:37:46 by isy               #+#    #+#             */
/*   Updated: 2016/08/10 07:54:29 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n);
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