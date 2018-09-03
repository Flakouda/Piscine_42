/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:11:59 by florientako       #+#    #+#             */
/*   Updated: 2018/09/03 15:43:23 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *i, int *j)
{
	int		k;

	k = *i;
	*i = *j;
	*j = k;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;

	i = 0;
	while (i != size)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;        
	}
}