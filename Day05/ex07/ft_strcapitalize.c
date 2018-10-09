/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:29:51 by florientako       #+#    #+#             */
/*   Updated: 2018/09/19 21:29:19 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	i = -1;
	while (str[++i])
		if ((str[i] >= 'a' && str[i] <= 'z') && 
		!((str[i - 1] >= 'a' && str[i - 1] <= 'z') || 
		(str[i - 1] >= '0' && str[i - 1] <= '9') ||
		(str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
			str[i] -= 32;
	return (str);
}