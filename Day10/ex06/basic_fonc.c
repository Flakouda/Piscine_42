/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_fonc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:08:45 by florientako       #+#    #+#             */
/*   Updated: 2018/10/15 11:01:58 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int		ft_atoi(char *str)
{
	int		i;
	int		j;
	int		neg;
	
	i = 0;
	j = 0;
	neg = 0;
	if (!str)
		return (0);
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	str[i] == '-' ? neg++ : 0;
	str[i] == '-' || str[i] == '+' ? i++ : 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j + str[i] - '0';
		i++;
		str[i] >= '0' && str[i] <= '9' ? j *= 10 : 0;
	}
	return (j);
}