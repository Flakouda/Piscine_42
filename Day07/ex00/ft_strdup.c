/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:25:58 by florientako       #+#    #+#             */
/*   Updated: 2018/10/09 17:08:08 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (!(dest = (char *)malloc(sizeof(*dest) * (i + 1))))
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	return (dest);
}