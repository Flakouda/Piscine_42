/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 18:20:00 by florientako       #+#    #+#             */
/*   Updated: 2018/11/03 19:17:42 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_foreach(t_list *begin_list, void(*f)(void *));

void	print_data(void *data)
{
	printf("find: %s!\n", data);
}

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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	if (*begin_list)
	{
		list = ft_create_elem(data);
		list->next = *begin_list;
		*begin_list = list;
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = NULL;
	list = malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

t_list	*add_link(t_list *list, char *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = list;
	}
	return (tmp);
}

void	aff_one_element(t_list *list)
{
	printf("%s\n", list->data);
}

void	aff_list(t_list *list)
{
	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
}

int	main(int ac, char **av)
{
	/*	Test ex01	*/

	/*
	t_list	*list;

	ft_list_push_back(&list, "1");
	ft_list_push_back(&list, "2");
	ft_list_push_back(&list, "3");
	aff_list(list);
	*/

	/*	Test ex02	*/

	/*
	tlist	*list;

	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "2");
	ft_list_push_front(&list, "3");
	aff_list(list);
	*/

	/*	Test ex03	*/

	/*
	t_list	*list;

	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "2");
	ft_list_push_front(&list, "3");
	printf("%d\n", ft_list_size(list));
	*/

	/*	Test ex04	*/

	/*
	t_list *list;

	list = NULL;
	list = add_link(list, "toto\n");
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");
	ft_list_push_front(&list, "test\n");
	printf("last list: %s", ft_list_last(list)->data);
	*/

	/*	Test ex05	*/

	/*
	t_list *list;

	list = NULL;
	list = ft_list_push_params(ac, av);
	aff_list(list);
  	*/

	/*	Test ex06	*/

	/*
	t_list *list;

	list = NULL;
	list = add_link(list, "toto");
	list = add_link(list, "tata");
	list = add_link(list, "tutu");
	aff_list(list);
	ft_list_clear(&list);
	aff_list(list);
	*/

	/*	Test ex07	*/

	/*
	t_list *list;

	list = NULL;
	list = add_link(list, "toto");
	list = add_link(list, "tata");
	list = add_link(list, "tutu");
	aff_one_element(ft_list_at(list, 0));
	*/

	/*	Test ex08	*/

	/*
	t_list *list;

	list = NULL;
	list = add_link(list, "toto");
	list = add_link(list, "tata");
	list = add_link(list, "tutu");
	list = add_link(list, "titi");
	aff_list(list);
	printf("\n");
	ft_list_reverse(&list);
	aff_list(list);
	*/

	/*	Test ex09	*/

	t_list *list;

	list = NULL;
	list = add_link(list, "4");
	list = add_link(list, "5");
	list = add_link(list, "6");
	list = add_link(list, "7");
	printf("\n");
	ft_list_foreach(list, print_data);

	return (0);
}