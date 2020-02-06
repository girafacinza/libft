/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:11:26 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/25 17:26:47 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t n_size;

	n_size = strlen((char *)needle);
	i = 0;
	while (i + n_size < len)
	{
		printf(".");
		j = 0;
		while (*(needle + j) == *(haystack + i + j))
			j++;
		if (j == n_size)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char *dst;

	dst =  ft_strnstr("Bob the dragqueen", "drag", 20);
	printf("%s\n", dst);
	dst =  ft_strnstr("Bob the dragqueen", "Bob", 10);
	printf("%s\n", dst);
	dst =  ft_strnstr("Bob the dragqueen", "Drag", 20);
	printf("%s\n", dst);
	dst =  ft_strnstr("Bob the dragqueen", "", 20);
	printf("%s\n", dst);
	dst =  ft_strnstr("Bob the dragqueen", "drag", 0);
	printf("%s\n", dst);
	dst =  ft_strnstr("Bob the dragqueen", "drag", 30);
	printf("%s\n", dst);
	return (0);

}
