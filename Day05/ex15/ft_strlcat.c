/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 12:45:13 by florientako       #+#    #+#             */
/*   Updated: 2018/10/08 14:53:21 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	*ft_stlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;
	int				k;

	k = ft_strlen(src);
	j = ft_strlen(dest);
	i = 0;
	if (size - 1 <= j)
		return (k + size);
	while (k + i < size - 1)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j + k);
}