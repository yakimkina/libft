/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 12:57:14 by enikole           #+#    #+#             */
/*   Updated: 2019/04/07 13:30:31 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if ((str = (char*)malloc(sizeof(*str) * (len1 + len2 + 1))) != NULL)
	{
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
		str[len1 + len2] = '\0';
	}
	return (str);
}
