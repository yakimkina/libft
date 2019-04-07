/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:56:53 by enikole           #+#    #+#             */
/*   Updated: 2019/04/07 12:01:07 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void					ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}