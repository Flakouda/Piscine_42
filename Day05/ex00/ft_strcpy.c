/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 16:08:31 by florientako       #+#    #+#             */
/*   Updated: 2018/09/19 21:31:02 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = -1;
	if (!dest || !src)
		return (0);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}