/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:03:57 by florientako       #+#    #+#             */
/*   Updated: 2018/09/03 15:46:43 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);
char	*ft_strrev(char *str);
int		ft_atoi(char *str);
void	ft_sort_integer_table(int *tab, int size);

int		main(int argc, char **argv)
{
	/*	Test ex00	*/
	
	/*
	int	nbr;

	nbr = 4;
	ft_ft(&nbr);
	ft_putnbr(nbr);
	ft_putchar('\n');
	*/

	/*	Test ex01	*/

	/*
	int n;
	int *nbr7;
	int **nbr6;
	int ***nbr5;
	int ****nbr4;
	int *****nbr3;
	int ******nbr2;
	int *******nbr1;
	int ********nbr;

	n = 1;
	
	nbr7 = &n;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;

	ft_ultimate_ft(&nbr);
	ft_putnbr(n);
	ft_putchar('\n');
	*/
	

	/*	Test ex02	*/

	/*
	int i;
	int	j;
	int	div;
	int	mod;

	i = 6;
	j = 2;
	div = 0;
	mod = 0;

	ft_div_mod(i, j, &div, &mod);
	ft_putnbr(div);
	ft_putchar('\n');
	ft_putnbr(mod);
	ft_putchar('\n');
	*/

	/*	Test ex03	*/

	/*	
	int i;
	int	j;

	i = 6;
	j = 2;

	ft_ultimate_div_mod(&i, &j);
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr(j);
	ft_putchar('\n');
	*/

	/*	Test ex04	*/

	/*
	char	*str;

	str = "Banana";
	ft_putstr(str);
	ft_putchar('\n');
	*/

	/*	Test ex05	*/

	/*
	char *str;

	str = "Correct number is 20";
	printf("%d\n", ft_strlen(str));
	*/

	/*	Test ex06	*/

	/*
	int		i;
	int		j;

	i = 4;
	j = 6;
	ft_swap(&i, &j);
	printf("%d\n%d\n", i, j);
	*/

	/*	Test ex07	*/

	/*
	char	str[] = "siht paws";

	printf("%s\n", ft_strrev(str));
	*/

	/*	Test ex08	*/

	/*
	char	*str;

	str = "  +2147483647";
	printf("Your answer is : %d\n", ft_atoi(str));
	printf("The good one is : %d\n", atoi(str));
	str = "-2147483648   4";
	printf("Your answer is : %d\n", ft_atoi(str));
	printf("The good one is : %d\n", atoi(str));
	str = "+-42";
	printf("Your answer is : %d\n", ft_atoi(str));
	printf("The good one is : %d\n", atoi(str));
	str = "4a2";
	printf("Your answer is : %d\n", ft_atoi(str));
	printf("The good one is : %d\n", atoi(str));
	str = "/02";
	printf("Your answer is : %d\n", ft_atoi(str));
	printf("The good one is : %d\n", atoi(str));
	*/

	/*	Test ex09	*/

	/*
	int		tab[7] = {10, 5, 2, 7, 1, 9, 0};
	int		i;

	i = 0;
	ft_sort_integer_table(tab, 6);
	while (i < 6)
	{
		printf("%d", tab[i]);
		i < 5 ? printf(", ") : 0;
		i++;
	}
	*/

	return (0);
}