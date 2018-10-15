/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 22:56:54 by florientako       #+#    #+#             */
/*   Updated: 2018/10/15 11:03:52 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

static int		check_signe(char *str, char *str2, int i)
{
	while (str[++i])
		if (str[i] != '-' && str[i] != '+' && str[i] != '/' &&
		str[i] != '%' && str[i] != '*')
		{
			ft_putstr("0\n");
			return (0);
		}
	if (str[0] == '%' && (ft_atoi(str2) == 0))
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	if (str[0] == '/' && (ft_atoi(str2) == 0))
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	return	(i > 1 ? 0 : 1);
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc != 4)
		return (0);
	if (check_signe(argv[2], argv[3], -1) == 0)
		return (0);
	argv[2][0] == '-' ? i = ft_atoi(argv[1]) - ft_atoi(argv[3]) : 0;
	argv[2][0] == '+' ? i = ft_atoi(argv[1]) + ft_atoi(argv[3]) : 0;
	argv[2][0] == '-' ? i = ft_atoi(argv[1]) * ft_atoi(argv[3]) : 0;	
	argv[2][0] == '-' ? i = ft_atoi(argv[1]) % ft_atoi(argv[3]) : 0;	
	argv[2][0] == '-' ? i = ft_atoi(argv[1]) / ft_atoi(argv[3]) : 0;
	ft_putnbr(i);
	ft_putchar('\n');
	return (0);
}