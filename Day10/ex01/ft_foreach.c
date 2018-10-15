/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 14:32:19 by florientako       #+#    #+#             */
/*   Updated: 2018/10/13 14:34:58 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int	*tab, int length, void(*f)(int))
{
	int		i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}