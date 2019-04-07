/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 12:02:40 by enikole           #+#    #+#             */
/*   Updated: 2019/04/07 12:09:59 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char					*ft_strmapi(char const *s,
		char (*f)(unsigned int, char))
{
	char				*str;
	unsigned	int		i;

	i = 0;
	if ((str = (char*)malloc(sizeof(*s) * (ft_strlen(s) + 1))) != NULL)
	{
		while (s[i] != '\0')
		{
			str[i] = f(i, s[i]);
			i++;
		}
	}
	return (str);
}
