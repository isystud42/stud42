/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 15:22:40 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/10 17:14:43 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkbase(char *base)
{
	int i;
	int j;
	int c;

	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		while (base[i] != base[j])
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return(1);

int		ft_rest(

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_checkbase(base) == 0 || base[1] == '\0' || base[0] == '\0' )
	{
		ft_putchar('n');
		exit;
	}
	int i;
	int n;
	char str[5];

	i = 0;
	n = 0;
	while(
