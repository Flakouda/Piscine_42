/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 11:04:52 by florientako       #+#    #+#             */
/*   Updated: 2018/10/15 13:41:23 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **str, char **dest)
{
	char	*theo;

	theo = *str;
	*str = *dest;
	*dest = theo;
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;

	i = 0;
	if (ft_strcmp(tab[i], tab[i + 1]) < 0 && tab[i + 1] && tab[i])
	{
		while (tab[i + 1])
		{
			i++;
			ft_strcmp(tab[i], tab[i + 1]) > 0 ? ft_swap(&tab[i], &tab[i + 1]) : 0;
			ft_strcmp(tab[i], tab[i + 1]) > 0 ? i = 0: 0;
		}
	}
	else if (ft_strcmp(tab[i], tab[i + 1]) > 0 && tab[i + 1] && tab[i])
	{
		while (tab[i + 1])
		{
			i++;
			ft_strcmp(tab[i], tab[i + 1]) < 0 ? ft_swap(&tab[i], &tab[i + 1]): 0;
			ft_strcmp(tab[i], tab[i + 1]) < 0 ? i = 0 : 0;
		}
	}
}