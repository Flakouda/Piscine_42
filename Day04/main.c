/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:07:17 by florientako       #+#    #+#             */
/*   Updated: 2018/09/18 15:44:15 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int			ft_iterative_factorial(int nb);
int			ft_recursive_factorial(int nb);
int			ft_iterative_power(int nb, int power);
int			ft_recursive_power(int nb, int power);
int			ft_fibonacci(int index);
int			ft_sqrt(int nb);
int			ft_is_prime(int nb);
int			ft_find_next_prime(int nb);
int			ft_eight_queens_puzzle(void);
void		ft_eight_queens_puzzle_2(void);	

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main()
{
	/*	Test ex00	*/

	/*
	int		i;

	i = -2;
	while (i++ < 13)
		printf("For i equal to %d : %d\n", i, ft_iterative_factorial(i));
	*/

	/*	Test ex01	*/

	/*
	int		i;

	i = -2;
	while (i++ < 13)
		printf("For i equal to %d : %d\n", i, ft_recursive_factorial(i));
	*/

	/*	Test ex02	*/

	/*
	int		i;
	int		nb;

	nb = 2;
	i = -2;
	while (i++ < 4)
		printf("For i equal to %d : %d\n", i, ft_iterative_power(nb, i));
	*/

	/*	Test ex03	*/

	/*
	int		i;
	int		nb;

	nb = 2;
	i = -2;
	while (i++ < 4)
		printf("For i equal to %d : %d\n", i, ft_recursive_power(nb, i));
	*/

	/*	Test ex04	*/
	
	/*
	int		i;

	i = -2;
	while (i++ < 10)
		printf("For i equal to %d : %d\n", i, ft_fibonacci(i));
	*/

	/*	Test ex05	*/
	
	/*
	int		i;

	i = -2;
	while (i++ < 16)
		printf("For i equal to %d : %d\n", i, ft_sqrt(i));
	*/

	/*	Test ex06 */

	/*
	int		i;

	i = -2;
	while (i++ < 17)
		printf("For i equal to %d : %d\n", i, ft_is_prime(i));
	*/

	/*	Test ex07 */

	/*
	int		i;

	i = -2;
	while (i++ < 17)
		printf("For i equal to %d : %d\n", i, ft_find_next_prime(i));
	*/

	/*	Test ex08 */

	//printf("%d\n", ft_eight_queens_puzzle());

	/*	Test ex09 */

	ft_eight_queens_puzzle_2();

	return (0);
}