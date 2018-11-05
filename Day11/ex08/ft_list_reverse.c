/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 17:36:45 by florientako       #+#    #+#             */
/*   Updated: 2018/11/01 17:46:30 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*list;
	t_list		*tmp;
	t_list		*new;

	new = 0;
	list = *begin_list;
	while (list)
	{
		tmp = list->next;
		list->next = new;
		new = list;
		list = tmp;
	}
	*begin_list = new;
}