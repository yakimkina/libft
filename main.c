/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:11:34 by enikole           #+#    #+#             */
/*   Updated: 2019/04/07 19:58:15 by enikole          ###   ########.fr       */
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
//	char dest[] = "12345;
//	char *a; 
//	char a[] = "5test";
//	char b[] = "123";
//	int c = 'e';
//	i0nt n = -1234;
//	ft_memset(dest, 0, 15);
//	ft_memset(dest, 'r', 6);
//	dest[14] = 'a';
//	size_t i = 30;
//	printf("%d\n", b[1]);
//	i = 6;
//	printf("original: %s\n", strncat(dest, "lore", 4));
//	printf("or all %s\n", a);
//	a = ft_strnew(i);
//	printf("mine: %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c\n",
//			a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29], a[30]);
//	printf("mi all %s\n", a);
	char s1[] = "lorem ipsum"; //dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendi    sse";
	char	**a;
	int	i=0;
	a = ft_strsplit(s1, ' ');
	while (a[i] != NULL)
	{
		printf("%s\n", a[i]);
		i++;
	}
	return 0;
}
