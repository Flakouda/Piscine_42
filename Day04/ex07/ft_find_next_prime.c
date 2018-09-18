/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 17:21:16 by florientako       #+#    #+#             */
/*   Updated: 2018/09/03 17:23:30 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;
	
	i = 2;
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	while ((i / 2) <= nb)
	{
		if (nb % 2 == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb) == 1))
		nb++;
	return (nb);
}