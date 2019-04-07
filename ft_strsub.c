/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:31:20 by enikole           #+#    #+#             */
/*   Updated: 2019/04/07 15:50:38 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char					*ft_strsub(char const *s, unsigned int start,
		size_t len)
{
	unsigned	int		i;
	char				*str;

	i = 0;
	if ((str = (char*)malloc(sizeof(*str) * len)) != NULL)
	{
		while (i < (unsigned int)len)
		{
			str[i] = s[start + i];
			i++;
		}
	}
	return (str);
}
