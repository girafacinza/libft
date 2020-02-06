/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 22:08:45 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/23 22:40:07 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	int					i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

int				main(void)
{
	printf("%d\n", ft_memcmp("salut", "salut", 5));
	printf("%d\n", ft_memcmp("t\200", "t\0", 2));
	printf("%d\n", ft_memcmp("testss", "test", 5));
	printf("%d\n", ft_memcmp("test", "tEst", 4));
	printf("%d\n", ft_memcmp("", "test", 4));
	printf("%d\n", ft_memcmp("test", "", 4));
	printf("%d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d\n", ft_memcmp("abcdefgh", "abcdwxyz", 6));
	printf("%d\n", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	return (0);
}
