/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 19:57:56 by enikole           #+#    #+#             */
/*   Updated: 2019/06/28 01:26:59 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (i > 0 && nb != (nb * 10 + (*str - 48)) / 10)
			return (-1);
		else if (i < 0 && nb != (nb * 10 + (*str - 48)) / 10)
			return (0);
		nb = nb * 10 + (*str - 48);
		str++;
	}
	return (i * nb);
}
