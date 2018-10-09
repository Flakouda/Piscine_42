/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 16:38:59 by florientako       #+#    #+#             */
/*   Updated: 2018/09/19 21:31:14 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;

	if (!dest || !src)
		return (0);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	i--;
	while (i++ <= n)
		dest[i] = '\0';
	return (dest);
}