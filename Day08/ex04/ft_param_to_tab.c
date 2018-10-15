/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 11:38:12 by florientako       #+#    #+#             */
/*   Updated: 2018/10/13 13:07:07 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (!(dest = (char *)malloc(sizeof(*dest) * (i + 1))))
		return (0);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	return (dest);
}

struct s_stock_par		*ft_param_to_par(int ac, char **av)
{
	int				i;
	t_stock_par		*stock;

	if (!(stock = malloc(sizeof(* stock) * ac + 1)))
		return (0);
	i = 0;
	while (i < ac)
	{		
		stock->size_param = ft_strlen(av[i]);
		stock->str = av[i];
		stock->copy = ft_strdup(av[i]);
		stock->tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock->str = 0;
	return (stock);
}