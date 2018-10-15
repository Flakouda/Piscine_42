/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 13:41:28 by florientako       #+#    #+#             */
/*   Updated: 2018/10/15 13:47:10 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_OPP_H__
# define __FT_OPP_H__

t_opp	gl_opptab[] = {{"-", &ft_sub}, \
{"+", &ft_add}, \
{"*", &ft_mul}, \
{"/", &ft_div}, \
{"%", &ft_mod}, \
{"", &ft_usage}};

#endif	/* __FT_OPP_H__ */