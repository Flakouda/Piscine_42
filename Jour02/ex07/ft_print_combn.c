/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:44:48 by florientako       #+#    #+#             */
/*   Updated: 2018/08/26 10:18:35 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_comb1()
{
	char		i;

	i = 47;
	while (i++ < 57)
	{
		ft_putchar(i);
		if (i != 57)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}	
}

void	print_combn(int *tab, int n)
{
	int		i;
	int		wrong;

	i = 1;
	wrong = 1;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
			wrong = 0;
		i++;
	}
	if (wrong)
	{
		i = 0;
		while (i < n)
			ft_putchar(tab[i++] + '0');
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		tab[n];

	i = 0;
	if (n == 1)
		print_comb1();
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n > 1)
	{
		print_combn(tab, n);
		tab[n - 1]++;
		i = n;
		while (i)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}