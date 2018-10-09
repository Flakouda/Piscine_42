/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:16:07 by florientako       #+#    #+#             */
/*   Updated: 2018/10/08 16:12:44 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

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

static void		print(int nbr, char *base, int i)
{
	while (base[i])
		i++;
	if (nbr < 0)
	{
		ft_putchar ('-');
		if (nbr == -2147483648)
		{
			ft_putchar(base[2]);
			nbr = -147483648;
		}
		nbr = -nbr;
	}
	if (nbr >= i)
	{
		print(nbr / i, base, 0);
		print(nbr % i, base, 0);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (base_error(base, 1, 0) == 0)
		return ;
	print(nbr, base, 0);
}