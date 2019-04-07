/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 12:15:02 by enikole           #+#    #+#             */
/*   Updated: 2019/04/07 12:28:15 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	if (!size)
		return (NULL);
	if ((str = (void*)malloc(sizeof(*str) * size)) != NULL)
		ft_bzero(str, size);
	return (str);
}
