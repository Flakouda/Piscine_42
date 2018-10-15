/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 22:39:12 by florientako       #+#    #+#             */
/*   Updated: 2018/10/14 22:59:27 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int	*tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	if (f(tab[i], tab[i + 1]) < 0 && i < length - 1)
	{
		while (i < length - 2)
		{
			i++;
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
		}
	}
	else if (f(tab[i], tab[i + 1]) > 0 && i < length - 1)
	{
		while (i < length - 2)
		{
			i++;
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
		}
	}
	return (1);
}