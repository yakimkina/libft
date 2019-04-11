/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:04:06 by enikole           #+#    #+#             */
/*   Updated: 2019/04/11 15:15:55 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*begin;

	begin = NULL;
	if (lst != NULL)
	{
		begin = (t_list*)malloc(sizeof(t_list));
		if (!begin)
			return (NULL);
		begin = f(lst);
		lst = lst->next;
		tmp = begin;
	}
	while (lst != NULL)
	{
		if ((new = (t_list*)malloc(sizeof(t_list))) != NULL)
		{
			new = f(lst);
			lst = lst->next;
			tmp->next = new;
			tmp = new;
		}
	}
	return (begin);
}
