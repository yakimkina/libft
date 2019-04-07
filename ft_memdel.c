/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 12:29:28 by enikole           #+#    #+#             */
/*   Updated: 2019/04/07 12:39:44 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		ft_memdel(void **ap)
{
	size_t	len;
	size_t	i;

	i = 0;
	if (!ap)
		return ;
	len = ft_strlen(*ap);
	while (i < len)
	{
		free(ap[i]);
		i++;
	}
	*ap = NULL;
}
