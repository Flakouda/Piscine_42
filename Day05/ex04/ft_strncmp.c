/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:29:07 by florientako       #+#    #+#             */
/*   Updated: 2018/09/18 17:31:27 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i != n - 1)
		i++;
	return (s1[i] - s2[i]);
}