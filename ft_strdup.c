/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:29:38 by enikole           #+#    #+#             */
/*   Updated: 2019/04/06 14:38:14 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char				*ft_strdup(const char *s1)
{
	char	*s;

	if ((s = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1))) != NULL)
		return ((char*)ft_memcpy(s, s1, ft_strlen(s1) + 1));
	return (NULL);
}
