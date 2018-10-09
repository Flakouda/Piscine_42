/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:16:15 by florientako       #+#    #+#             */
/*   Updated: 2018/10/09 11:27:33 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	erreur_str(char *str, char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if ((str[i] == 43 || str[i] == 45) && i != 0)
			return (0);
		if (base[j] == '\0')
			return (0);
		if (base[j] == str[i] || ((str[i] == 43 || str[i] == 45) && i == 0))
		{
			j = -1;
			i++;
			if (str[i] == 43 || str[i] == 45)
				return (2);
		}
		j++;
	}
	if (str[0] == 45)
		return (2);
	return (1);
}

int			base_error(char *base, int i, int j)
{
	if (base == 0 || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[j])
	{
		if (base[j] == 43 || base [j] == 45)
			return (0);
		while (base[i])
		{
			if (base[j] == base[i])
				return (0);
			i++;
		}
		j++;
		i = j + 1;
	}
	return (1);
}

int		execute(char *str, char *base, int i, int j)
{
	int		neg;
	
	neg = 0;
	if (!str)
		return (0);
	str[i] == '-' ? neg++ : 0;
	str[i] == '-' || str[i] == '+' ? i++ : 0;
	while (str[i] >= base[] && str[i] <= '9')
	{
		j = j + str[i] - '0';
		i++;
		str[i] >= '0' && str[i] <= '9' ? j *= 10 : 0;
	}
	return (j);
}

static int	ft_atoi_b(char *str, char *base, int i, int n)
{
	int		negatif;
	int		k;
	int		j;

	j = 0;
	k = 0;
	negatif = 0;
	while (base[k])
		k++;
	if (erreur_base(base) == 0 || erreur_str(str, base) == 0)
		return (0);
	erreur_str(str, base) == 2 ? negatif++ : negatif == 0;
	str[0] == '+' || str[0] == '-' ? ++i : 0;
	while (str[++i])
	{
		while (!(base[j] == str[i]) && base[j])
			j++;
		if (base[j] == '\0')
			return (n);
		n = n * k;
		n = n + j;
		j = 0;
	}
	return (negatif == 1 ? -n : n);
}

int				ft_atoi_base(char *str, char *base)
{
	base_error(base, 1, 0);
	string_error(str, base, 0, 0);
	return (execute(str, base, 0, 0));
}