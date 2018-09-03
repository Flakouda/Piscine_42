/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 20:17:12 by florientako       #+#    #+#             */
/*   Updated: 2018/08/22 21:29:09 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_comb(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = 47;
	while (i++ < '7')
	{
		j = i;
		while (j++ <= '8')
		{
			k = j;
			while (k++ <= '8')
				print_comb(i, j, k);
		}
	}
}