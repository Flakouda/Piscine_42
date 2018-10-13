/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 17:04:44 by florientako       #+#    #+#             */
/*   Updated: 2018/10/09 17:17:24 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(tab = (int *)malloc(sizeof(*tab) * (max - min))))
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++; 
	}
	*range = tab;
	return (i);
}