/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:12:05 by flakouda          #+#    #+#             */
/*   Updated: 2018/11/05 16:49:28 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *list;

	while (*begin_list && (*cmp)((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	list = *begin_list;
	while (list && list->next)
	{
		if ((*cmp)(list->next->data, data_ref) == 0)
		{
			tmp = list->next;
			list->next = tmp->next;
			free(tmp);
		}
		else
			list = list->next;
	}
}