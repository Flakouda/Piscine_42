/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:46:04 by florientako       #+#    #+#             */
/*   Updated: 2018/10/13 10:38:34 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(tab = (int *)malloc(sizeof(*tab) * (max - min))))
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++; 
	}
	return (tab);
}
