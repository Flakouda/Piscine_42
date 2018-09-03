/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 12:32:52 by florientako       #+#    #+#             */
/*   Updated: 2018/09/03 13:06:15 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (str[i])
		i++;
	while (i-- > j++)
		ft_swap(&str[i], &str[j]);
	return (str);
}