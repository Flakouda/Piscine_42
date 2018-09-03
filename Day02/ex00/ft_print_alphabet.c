/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 18:43:42 by florientako       #+#    #+#             */
/*   Updated: 2018/08/22 19:44:10 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
    int i;

    i = 96;
    while (i++ < 'z')
		ft_putchar(i);
}