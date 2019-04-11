/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:04:27 by enikole           #+#    #+#             */
/*   Updated: 2019/04/11 16:29:59 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	size_t		ft_kol(char const *s, char c)
{
	size_t			i;
	size_t			j;
	size_t			count;

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

static	size_t		ft_cpy(char *dst, const char *src, unsigned int n,
		unsigned int k)
{
	dst[n] = '\0';
	ft_strncpy(dst, src, n);
	k++;
	return (k);
}

static	size_t		ft_check(size_t k, char **arr)
{
	if (arr[k] == NULL)
	{
		while (k--)
			free(arr[k]);
		free(arr);
		return (1);
	}
	return (0);
}

static	size_t		ft_go(size_t i, size_t j, char const *s, char c)
{
	while (s[i + j] == c)
		j++;
	j += i;
	return (j);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t			i;
	size_t			j;
	size_t			k;
	char			**arr;

	k = 0;
	if (!s || ft_strlen(s) == 0)
		return (NULL);
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
			else if (i != 0 && ft_check(k, arr))
				return (NULL);
			j = ft_go(i, j, s, c);
		}
		arr[k] = NULL;
	}
	return (arr);
}
