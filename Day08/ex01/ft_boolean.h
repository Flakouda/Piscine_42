/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 10:47:43 by florientako       #+#    #+#             */
/*   Updated: 2018/10/13 11:06:04 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>

# define t_bool			int
# define EVEN(nbr)		(nbr % 2) == 0		
# define EVEN_MSG		"J'ai un nombre pair d'arguments.\n"
# define ODD_MSG		"J'ai un nombre impair d'arguments.\n"
# define SUCCESS		0
# define TRUE			1
# define FALSE			0

#endif