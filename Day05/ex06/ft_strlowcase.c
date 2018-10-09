/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:36:48 by florientako       #+#    #+#             */
/*   Updated: 2018/09/19 21:29:44 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strlowcase(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}