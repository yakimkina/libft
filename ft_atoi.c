/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 19:57:56 by enikole           #+#    #+#             */
/*   Updated: 2019/04/06 14:44:28 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int								ft_atoi(const char *str)
{
	int							i;
	unsigned	long	int		nb;
	unsigned	long	int		chk;

	i = 1;
	nb = 0;
	chk = 9223372036854775807;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57 && (nb = nb * 10 + (*str - 48)) < chk)
		str++;
	if (i > 0 && nb > chk)
		return (-1);
	else if (i < 0 && nb > (chk + 1))
		return (0);
	return ((int)(i * nb));
}
