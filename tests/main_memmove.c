/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 19:41:49 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/25 18:58:02 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*dst_str;
	const char	*src_str;

	dst_str = dst;
	src_str = src;
	i = 0;
	while (n--)
	{
		*(dst_str + i) = *(src_str + i);
		i++;
	}
	dst = dst_str;
	return (dst);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_str;
	const char	*src_str;
	size_t		l;

	dst_str = dst;
	src_str = src;
	l = 0;
	while (l < len) 
	{
		if (src_str + len - 1 == dst_str + l)
		{
			while (len--)
			{
				*(dst_str + len) = *((char *)src_str + len);
			}
			return (dst_str);
		}
		l++;
	}
	return (ft_memcpy(dst_str, src_str, len));
}

int main ()
{
	char str[100];
	char *dest;
	char	src[] = "lorem ipsum dolor sit amet";

	dest = src + 1;
	strcpy(str,"abcdefghijklmnop");
	ft_memmove (str, str+1, 3);
	printf("ft:\t\t%s\n", str);
	strcpy(str,"abcdefghijklmnop");
	memmove (str, str+1, 3);
	printf("original:\t%s\n", str);
	strcpy(str, "memmove can be very useful......");
  	ft_memmove (str+20,str+15,11);
	printf("ft:\t\t%s\n", str);
	//strcpy(str,"123456789");
	//ft_memmove (str+6,str+3,5);
	//printf("%s\n", str);
	printf("%s\n", ft_memmove(dest, "consectetur", 5));
	strcpy(src,"lorem ipsum dolor sit amet");
	dest = src + 1;
	printf("%s\n", ft_memmove(dest, "con\0sec\0\0te\0tur", 10));
	strcpy(src,"lorem ipsum dolor sit amet");
	dest = src + 1;
	printf("%s\n", ft_memmove(dest, src, 8));
	strcpy(src,"lorem ipsum dolor sit amet");
	dest = src + 1;
	printf("%s\n", ft_memmove(src, dest, 8));
	strcpy(src,"lorem ipsum dolor sit amet");
	dest = src + 1;
	printf("%s\n", ft_memmove(src, dest, 0));
	return (0);
}
