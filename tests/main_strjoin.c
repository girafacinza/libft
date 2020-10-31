/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 22:39:45 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/24 23:12:44 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	len = strlen((char *)s1);
	len += strlen((char *)s2);
	printf("len=%zu\n", len);
	if (NULL != (str = (char *)malloc(sizeof(char) * len)))
	{
		while (*s1)
		{
			*str = *s1;
			s1++;
			str++;
		}
		while (*s2)
		{
			*str = *s2;
			s2++;
			str++;
		}
	}
	return (str - len);
}

int		main(void)
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";

	printf("%s\n", ft_strjoin(s1, s2));
	s1[0] = '\0';
	printf("%s\n", ft_strjoin(s1, s2));
	strcpy(s1, "lorem ipsum");
	s2[0] = '\0';
	printf("%s\n", ft_strjoin(s1, s2));
	s1[0] = '\0';
	s2[0] = '\0';
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
