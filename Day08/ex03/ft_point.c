/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 11:17:30 by florientako       #+#    #+#             */
/*   Updated: 2018/10/13 11:26:58 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;	
}

int		main(void)
{
	t_point		point;

	set_point(&point);
	printf("%d\n", point.x);
	printf("%d\n", point.y);
	return (0);
}