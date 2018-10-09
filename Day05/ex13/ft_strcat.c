/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 12:18:26 by florientako       #+#    #+#             */
/*   Updated: 2018/09/20 12:37:33 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	j = -1;
	i = 0;
	while (dest[i])
		i++;
	while (src[++j])
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}