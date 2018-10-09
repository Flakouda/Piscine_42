/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:36:53 by florientako       #+#    #+#             */
/*   Updated: 2018/09/19 21:29:59 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strupcase(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}