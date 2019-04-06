/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:11:34 by enikole           #+#    #+#             */
/*   Updated: 2019/04/06 11:55:39 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <strings.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"
int main()
{
	char dest[] = "12345           ";
//	char a[] = ""; 
//	char a[] = "5test";
//	char b[] = "123";
//	int c = 'e';
//	ft_memset(dest, 0, 15);
//	ft_memset(dest, 'r', 6);
//	dest[14] = 'a';
//	size_t i;
//	printf("%d\n", b[1]);
//	i = 6;
//	printf("original: %s\n", strncat(dest, "lore", 4));
//	printf("or all %s\n", a);
	printf("mine: %s\n", ft_strncat(dest, "lore", 4));
//	printf("mi all %s\n", a);
	return 0;
}
