/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:27:48 by enikole           #+#    #+#             */
/*   Updated: 2019/04/06 14:36:57 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void							*ft_memmove(void *dst, const void *src,
		size_t len)
{
	unsigned	char			*d;
	const	unsigned	char	*s;

	d = (unsigned char*)dst;
	s = (const unsigned char*)src;
	if (d < s)
	{
		while (len--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else
		ft_memcpy(d, s, len);
	return ((void*)dst);
}
