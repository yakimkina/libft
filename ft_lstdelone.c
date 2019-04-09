/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 13:22:22 by enikole           #+#    #+#             */
/*   Updated: 2019/04/08 16:51:09 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	while ((*alst)->next != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		*alst = (*alst)->next;
	}
	ft_memdel((void**)alst);
}
