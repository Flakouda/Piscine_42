/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:02:59 by florientako       #+#    #+#             */
/*   Updated: 2018/09/18 17:24:25 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	
	i = -1;
	j = 0;
	if (!str || !to_find)
		return (0);
	while (str[++i])
	{
		while (str[i] == to_find[j] && str[i])
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + (i - j));
		else
		{
			i = i - j;
			j = 0;
		}
	}
	return (0);
}
