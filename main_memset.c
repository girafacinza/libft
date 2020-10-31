/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 19:07:57 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/21 21:44:28 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void 			*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = b;
	while (len > 0 && b != '\0')
	{
		*(str + i) = (unsigned char)c;
		i++;
		len--;
	}
	b = str;
	return (b);
}

int			main(void)
{
	char c;
	char str1[50];
	int num;
	int num2[10] = {1,2,3,5};
	int num3[10] = {1,2,3,5};
	int i;

	c = 'a';
	printf("c = %c\n", c);
	memset(&c, 43, 1);
	printf("memset(&c, 43, 1): %c\t", c);
	c = 'a';
	ft_memset(&c, 43, 1);
	printf("ft_memset(&c, 43, 1): %c\n", c);

	strcpy(str1,"42 sao paulo");
	printf("str1 = %s\n", str1);
	memset(str1, 43, 5);
	printf("memset(str1, 43, 5): %s\t", str1);
	strcpy(str1,"42 sao paulo");
	ft_memset(str1, 43, 5);
	printf("ft_memset(str1, 43, 5): %s\n", str1);

	num = 66;
	printf("num = %d\n", num);
	memset(&num, 47, 1);
	printf("memset(&num, 50, 1): %d\t", num);
	num = 66;
	ft_memset(&num, 47, 1);
	printf("ft_memset(&num, 50, 1): %d\n", num);

	memset(&num2, 55, 40);
	printf("memset(&num2, 50, 1): ");
	for (i=0;i<10;i++)
		printf("%d ", num2[i]);

	ft_memset(&num3, 55, 40);
	printf("ft_memset(&num3, 50, 1): ");
	for (i=0;i<10;i++)
		printf("%d ", num3[i]);
}
