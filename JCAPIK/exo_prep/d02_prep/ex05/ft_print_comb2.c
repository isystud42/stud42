/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 01:44:20 by jcapik            #+#    #+#             */
/*   Updated: 2016/08/11 15:46:09 by jcapik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar2(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (a != '9' || b != '8')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

int		initia_d(char a, char b, char c)
{
	if (c == a)
	{
		return (b + 1);
	}
	return ('0');
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0' - 1;
	while (++a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			while (c <= '9')
			{
				d = initia_d(a, b, c);
				while (d <= '9')
				{
					ft_putchar2(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
	}
}
