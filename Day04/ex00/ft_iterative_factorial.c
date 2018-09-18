/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:58:37 by florientako       #+#    #+#             */
/*   Updated: 2018/09/03 16:24:37 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;

	i = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (i-- != 1)
		nb *= i;
	return (nb);
}