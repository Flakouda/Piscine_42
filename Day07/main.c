/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:31:43 by florientako       #+#    #+#             */
/*   Updated: 2018/10/13 10:35:04 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char		*ft_strdup(char *src);
int			*ft_range(int min, int max);
int			ft_ultimate_range(int **range, int min, int max);
char		*ft_concat_params(int argc, char **argv);
char		**ft_split_whitespaces(char *str);
void		ft_print_words_tables(char **tab);
char		*ft_convert_base(char *nbr, char *base_from, char *base_to);


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	/*	Test ex00	*/

	/*
	printf("%s\n", ft_strdup(argv[1]));
	printf("%s\n", strdup(argv[1]));	 
	*/

	/*	Test ex01	*/

	/*
	int		i;
	int		*tab;

	i = -1;
	tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (++i < atoi(argv[2]) - atoi(argv[1]))
		i < (atoi(argv[2]) - atoi(argv[1])) - 1 ?
		printf("%d, ", tab[i]) : printf("%d\n", tab[i]);
	*/

	/*	Test ex02	*/

	/*
	int		*tab;
	int		i;
	int		j;

	i = -1;
	j = ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));
	printf("%d\n\n", j);
	while (++i < atoi(argv[2]) - atoi(argv[1]))
		i < (atoi(argv[2]) - atoi(argv[1])) - 1 ?
		printf("%d, ", tab[i]) : printf("%d\n", tab[i]);
	*/

	/*	Test ex03	*/

	/*
	char	*str;

	str = ft_concat_params(argc, argv);
	printf("%s\n", str);
	*/

	/*	Test ex04	*/

	/*
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split_whitespaces(argv[1]);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	*/

	/*	Test ex05	*/
	
	/*
	char	**tab;

	tab = ft_split_whitespaces(argv[1]);
	ft_print_words_tables(tab);	
	*/

	return (0);
}