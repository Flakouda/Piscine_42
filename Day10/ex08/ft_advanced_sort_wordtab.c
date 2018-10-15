/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 13:16:01 by florientako       #+#    #+#             */
/*   Updated: 2018/10/15 13:39:37 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **str, char **dest)
{
	char	*theo;

	theo = *str;
	*str = *dest;
	*dest = theo;
}

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *))
{
	int		i;

	i = 0;
	if (cmp(tab[i], tab[i + 1]) < 0 && tab[i + 1] && tab[i])
	{
		while (tab[i + 1])
		{
			i++;
			cmp(tab[i], tab[i + 1]) > 0 ? ft_swap(&tab[i], &tab[i + 1]) : 0;
			cmp(tab[i], tab[i + 1]) > 0 ? i = 0 : 0;
		}
	}
	else if (cmp(tab[i], tab[i + 1]) > 0 && tab[i + 1] && tab[i])
	{
		while (tab[i + 1])
		{
			i++;
			cmp(tab[i], tab[i + 1]) < 0 ? ft_swap(&tab[i], &tab[i + 1]) : 0;
			cmp(tab[i], tab[i + 1]) < 0 ? i = 0 : 0;
		}
	}
}