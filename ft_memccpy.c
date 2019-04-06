/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:09:09 by enikole           #+#    #+#             */
/*   Updated: 2019/04/06 14:31:17 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void							*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	const	unsigned	char	*s;
	unsigned	char			*d;

	d = (unsigned char*)dst;
	s = (const unsigned char*)src;
	while (n--)
	{
		*d = *s;
		if (*s == (unsigned char)c)
			return ((void*)(++d));
		s++;
		d++;
	}
	return (NULL);
}
