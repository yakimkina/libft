/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:29:13 by enikole           #+#    #+#             */
/*   Updated: 2019/04/06 14:28:21 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void							*ft_memcpy(void *restrict dst,
		const void *restrict src, size_t n)
{
	unsigned	char			*d;
	const	unsigned	char	*s;

	d = (unsigned char*)dst + (unsigned char)n;
	s = (unsigned char*)src + (unsigned char)n;
	while (n--)
	{
		d--;
		s--;
		*d = *s;
	}
	return ((void*)dst);
}
