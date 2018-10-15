/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 13:10:35 by florientako       #+#    #+#             */
/*   Updated: 2018/10/13 13:43:31 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	ft_print_words_tab(char **tab)
{
	int		i;

	while (tab && *tab)
	{
		i = 0;
		while (*tab[i])
			ft_putchar(*tab[i++]);
		ft_putchar('\n');
		tab++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;

	i = 0;
	while (par && par->str)
	{
		ft_putstr(par->str);
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_print_words_tab(par->tab);
		par++;
	}
}