/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:51:10 by enikole           #+#    #+#             */
/*   Updated: 2019/04/07 17:03:42 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	l;
	char	*str;

	i = 0;
	l = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while ((s[l] == ' ' || s[l] == '\n' || s[l] == '\t') && i != ft_strlen(s))
		l--;
	if ((str = (char*)malloc(sizeof(*str) * (l - i + 1))) != NULL)
	{
		i = 0;
		j = 0;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		while (i + j <= l)
		{
			str[j] = s[i + j];
			j++;
		}
		str[j] = '\0';
	}
	return (str);
}
