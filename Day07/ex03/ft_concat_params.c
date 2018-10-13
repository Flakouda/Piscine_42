/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 17:19:11 by florientako       #+#    #+#             */
/*   Updated: 2018/10/09 22:26:05 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str, int i)
{
	while (str[i])
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = -1;
	k = -1;
	while (++i < argc - 1)
		j += ft_strlen(argv[i], 0);
	if (!(str = (char *)malloc(sizeof(*str) * (j + argc - 2))))
		return (NULL);
	i = 0;
	j = 0;
	while (j++ < argc - 1)
	{
		while (argv[j][++k])
			str[i++] = argv[j][k];
		k = -1;
		j != argc - 1 ? str[i] = '\n' : 0;
		i++;
	}
	return (str);
}