/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:18:40 by enikole           #+#    #+#             */
/*   Updated: 2019/04/06 15:36:45 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s != '\0')
	{
		f(s);
		s++;
	}
}