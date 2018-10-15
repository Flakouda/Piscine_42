/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 11:11:15 by florientako       #+#    #+#             */
/*   Updated: 2018/10/13 11:14:27 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int		main()
{
	int		value;

	value = -5;
	value = ABS(value);
	printf("%d\n", value);
	return (value);
}