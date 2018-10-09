/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:08:45 by florientako       #+#    #+#             */
/*   Updated: 2018/09/18 17:46:40 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		j;
	int		neg;
	
	i = 0;
	j = 0;
	neg = 0;
	if (!str)
		return (0);
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	str[i] == '-' ? neg++ : 0;
	str[i] == '-' || str[i] == '+' ? i++ : 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j + str[i] - '0';
		i++;
		str[i] >= '0' && str[i] <= '9' ? j *= 10 : 0;
	}
	return (j);
}