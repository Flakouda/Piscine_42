/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 14:35:03 by florientako       #+#    #+#             */
/*   Updated: 2018/10/15 18:39:10 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int	*tab, int length, void(*f)(int));
int		*ft_map(int *tab, int length, int (*f)(int));
int		ft_any(char **tab, int (*f)(char *));
int		ft_count_if(char **tab, int(*f)(char*));
int		ft_is_sort(int	*tab, int length, int (*f)(int, int));
void	ft_sort_wordtab(char **tab);
char	**ft_split_whitespaces(char *str);
void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));

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

int			ft_cmp(int s1, int s2)
{
	if (!s1 || !s2)
		return (0);
	return (s1 - s2);
}

int		ft_diff(char *s1)
{
	int		i;
	char	j;

	i = -1;
	j = 0;
	while (s1[++i])
		if (s1[i] > '5')
			return (1);
	return (0);
}

int		equal_four(char *s1)
{
	return (*s1 == 52 ? 1 : 0); 
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int		plus_two(int i)
{
	return (i + 2);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_words_tables(char **tab)
{
	int		i;

	i = -1;
	while (tab[++i] != NULL)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	/*	Test ex01	*/
	
	/*
	int		tab[] = {1, 4, 8, 10};

	ft_foreach(tab, 4, &ft_putnbr);
	*/

	/*	Test ex02	*/

	/*
	int		i;
	int		tab[] = {1, 4, 8, 10};

	i = -1;
	while (++i < 4)
	{
		ft_map(tab, 4, &plus_two);
		ft_putchar('\n');
		ft_putnbr(tab[i]);
	}
	*/

	/*	Test ex03	*/

	/*
	char	**str;

	str[0] = "1";
	str[1] = "4";
	str[2] = "8";
	str[3] = 0;
	printf("%d\n", ft_any(str, &equal_four));
	*/

	/*	Test ex04	*/

	/*
	char	**str;

	str[0] = "1";
	str[1] = "4";
	str[2] = "8";
	str[3] = 0;
	printf("%d\n", ft_count_if(str, &ft_diff));
	*/

	/*	Test ex05	*/

	/*
	int		tab[4] = {1, 4, 8, 10};

	printf("%d\n", ft_is_sort(tab, 4, &ft_cmp));	
	*/

	/*	Test ex07	*/

	/*
	char	**tab;
	int		i;

	tab = ft_split_whitespaces(argv[1]);
	ft_print_words_tables(tab);
	ft_putchar('\n');
	ft_sort_wordtab(tab);
	ft_print_words_tables(tab);
	*/

	/*	Test ex08	*/

	/*
	char	**tab;
	int		i;

	tab = ft_split_whitespaces(argv[1]);
	ft_print_words_tables(tab);
	ft_putchar('\n');
	ft_advanced_sort_wordtab(tab, &ft_strcmp);
	ft_print_words_tables(tab);
	*/

	return (0);
}