/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:11:26 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/30 21:28:12 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t n_size;

	n_size = strlen((char *)needle);
	if (n_size == 0)
		return ((char *)haystack);
	i = 0;
	printf("n_size=%lu, len=%lu\n", n_size, len);
	while (i + n_size < len)
	{
		j = 0;
		while (*(needle + j) == *(haystack + i + j))
		{
		printf("%c", needle[j]);
			j++;
		}
		printf("[j=%lu][i=%lu][n=%lu]", j, i, n_size);
		if (j == n_size + 1)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

int main(void)
{
	char *s5 = "Bonjour";
	char *s6 = "jour";
    char *i5 = strnstr(s5, s6, 8);
    char *i6 = ft_strnstr(s5, s6, 8);

	printf("%s, %s\n", i6, i5);
	char *s1 = "AAAAAAAAAAAAA";
    size_t max = strlen(s1);
    char *i1 = strnstr(s1, s1, max);
    char *i2 = ft_strnstr(s1, s1, max);

	printf("%s, %s\n", i2, i1);

	char *s2 = "A";
    char *i3 = strnstr(s1, s1, 2);
    char *i4 = ft_strnstr(s1, s1, 2);
	printf("%s, %s\n", i4, i3);
	return (0);
}
