/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:04:27 by enikole           #+#    #+#             */
/*   Updated: 2019/04/08 14:42:25 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	unsigned	int		ft_kol(char const *s, char c)
{
	unsigned	int			i;
	unsigned	int			j;
	unsigned	int			count;

	i = 0;
	j = ft_strlen(s) - 1;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[j] == c && j)
		j--;
	while (i <= j)
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	return ((++count));
}

static	unsigned	int		ft_cpy(char *dst, const char *src, unsigned int n,
		unsigned int k)
{
	dst[n] = '\0';
	ft_strncpy(dst, src, n);
	k++;
	return (k);
}

char						**ft_strsplit(char const *s, char c)
{
	unsigned	int			i;
	unsigned	int			j;
	unsigned	int			k;
	char					**arr;

	k = 0;
	if ((arr = (char**)malloc(sizeof(char*) * (ft_kol(s, c) + 1))) != NULL)
	{
		j = 0;
		while (s[j] != '\0')
		{
			i = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				i++;
			if (i != 0 && (arr[k] = (char*)malloc(i + 1)) != NULL)
				k = ft_cpy(arr[k], &s[j], i, k);
			while (s[i + j] == c)
				j++;
			j += i;
		}
		arr[k] = NULL;
	}
	return (arr);
}
