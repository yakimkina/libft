/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:53:55 by enikole           #+#    #+#             */
/*   Updated: 2019/04/11 21:24:48 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int		ft_len(int nb, int base)
{
	int			k;

	k = 1;
	while ((nb /= base) != 0)
		k++;
	return (k);
}

char			*ft_itoa_base(int value, int base)
{
	int			k;
	int			sym;
	char		*str;

	if (base == 10)
		return (ft_itoa(value));
	if (base < 2 || base > 16 || value < 0)
		return (NULL);
	k = ft_len(value, base);
	if ((str = (char*)malloc(sizeof(char) * (k + 1))) != NULL)
	{
		str[k] = '\0';
		while (k--)
		{
			sym = value % base;
			if (sym >= 10 && sym <= 15)
				str[k] = 'A' + sym % 10;
			else
				str[k] = sym + 48;
			value /= base;
		}
	}
	return (str);
}
