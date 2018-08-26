/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 19:20:17 by florientako       #+#    #+#             */
/*   Updated: 2018/08/26 10:18:31 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(int nb);
void	ft_print_combn(int n);

int		main(int argc, char **argv)
{
	int	i;

	/*	Test ex00	*/

	//ft_print_alphabet();


	/*	Test ex01	*/

	//ft_print_reverse_alphabet();
	

	/*	Test ex02	*/

	//ft_print_numbers();
	

	/*	Test ex03	*/

	/*
	i = -2;
	while (i++ != 1)
		ft_is_negative(i);
	*/
	

	/*	Test ex04	*/

	//ft_print_comb();


	/*	Test ex05	*/

	//ft_print_comb2();


	/*	Test ex06	*/

	/*
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-2);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(2);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	*/


	/*	Test ex07	*/

	/*
	i = 0;
	while (i++ != 9)
	{
		ft_print_combn(i);
		ft_putchar('\n');
		ft_putchar('\n');
	}
	*/

	return (0);
}