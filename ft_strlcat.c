/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:43:10 by enikole           #+#    #+#             */
/*   Updated: 2019/04/06 14:40:27 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *restrict dst, const char *restrict src,
		size_t size)
{
	size_t		len_dst;
	size_t		len_src;
	size_t		res;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	else
		res = len_src + len_dst;
	size -= (len_dst + 1);
	while (*dst != '\0')
		dst++;
	while (size-- && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (res);
}
