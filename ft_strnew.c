/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:52:56 by enikole           #+#    #+#             */
/*   Updated: 2019/04/08 13:37:52 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;

	if ((size_t)(-1))
		return (0);
	if ((str = (char*)malloc(sizeof(*str) * (size + 1))) != NULL)
	{
		str[size] = '\0';
		ft_bzero(str, size);
	}
	return (str);
}
