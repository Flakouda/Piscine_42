/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:55:19 by florientako       #+#    #+#             */
/*   Updated: 2018/10/08 15:15:37 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char		*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;
	int		j;

	i = ft_strlen(src);
	j = -1;

	if (!dest || !src || !size)
		return (0);
	while (j++ < size - 1)
		dest[j] = src[j];
	dest[j] = '\0';
	return (i);
}