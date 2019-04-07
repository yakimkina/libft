/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:52:56 by enikole           #+#    #+#             */
/*   Updated: 2019/04/07 15:23:16 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;

	if ((str = (char*)malloc(sizeof(*str) * size)) != NULL && size)
	{
		size--;
		str[size] = '\0';
		ft_bzero(str, size);
	}
	return (str);
}
