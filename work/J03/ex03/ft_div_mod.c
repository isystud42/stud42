/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 19:04:37 by isy               #+#    #+#             */
/*   Updated: 2016/08/06 19:09:15 by isy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.b>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	return ;
}
