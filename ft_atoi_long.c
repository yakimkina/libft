/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
=======
/*   ft_atoi.c                                          :+:      :+:    :+:   */
>>>>>>> 412157146a63774a1bad597d781dc75d1b430424
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 19:57:56 by enikole           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/08/02 15:34:31 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

=======
/*   Updated: 2019/06/28 01:26:59 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> 412157146a63774a1bad597d781dc75d1b430424
long	int			ft_atoi_long(const char *str)
{
	int				i;
	long	int		nb;

	i = 1;
	nb = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
<<<<<<< HEAD
		if (nb > MAX_INT || nb < MIN_INT)
			break ;
=======
		if (i > 0 && nb != (nb * 10 + (*str - 48)) / 10)
			return (-1);
		else if (i < 0 && nb != (nb * 10 + (*str - 48)) / 10)
			return (0);
>>>>>>> 412157146a63774a1bad597d781dc75d1b430424
		nb = nb * 10 + (*str - 48);
		str++;
	}
	return (i * nb);
}