/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 22:26:33 by florientako       #+#    #+#             */
/*   Updated: 2018/10/13 13:06:23 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int		count_words(char *str, int count, int i)
{
	while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i++])
		if (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
			if (str[i + 1] == '\n' || str[i + 1] == '\t' || str[i + 1] == ' ' || str[i + 1] == '\0')
				count++;
	return (count);
}

char	*ft_strdup(char *dest, char *str, int i, int k)
{
	while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
	{
		k++;
		i++;
	}
	i -= k;
	dest = malloc(sizeof(* dest) * (k + 1));
	k = 0;
	while (str[i] != '\n' && str[i] != '\t' && str[i] != ' '  && str[i] != '\0')
	{
		dest[k] = str[i];
		k++;
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

char		**ft_split_whitespaces(char *str)
{
	char	**tab;
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(**tab) * (count_words(str, 0, 0)));
	while (str[i])
	{
		while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i])
			i++;
		dest = ft_strdup(dest, str, i, 0);
		tab[j] = dest;
		while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
			i++;
		j++;
	}
	((str[i - 1] == '\n' || str[i - 1] == '\t' || str[i - 1] == ' ') && str[i] == '\0') ? j-- : 0;
	tab[j] = NULL;
	return (tab);
}