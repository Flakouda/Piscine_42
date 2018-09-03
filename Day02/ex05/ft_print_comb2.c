/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 17:01:55 by florientako       #+#    #+#             */
/*   Updated: 2018/08/25 18:10:43 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_comb2(char a, char b, char c, char d)
{
	if (a <= '9' && b <= '9' && c <= '9' && d <= '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	execute_comb2(char i, char j, char k, char l)
{
	while (!(i >= '9' && j >= '8' && k >= '9' && l >= '9'))
	{
		if (l > '9')
		{
			l = '0';
			k++;
		}
		if (k > '9')
		{
			j++;
			l = j + 1;
			k = i; 
		}
		if (j > '9')
		{
			i++;
			j = '0';
			k = i;
			l = '1';
		}
		print_comb2(i, j, k, l);
		l++;
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = '0';
	j = '0';
	k = '0';
	l = '1';
	execute_comb2(i, j, k, l);
}