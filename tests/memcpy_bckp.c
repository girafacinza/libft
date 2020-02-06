/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:44:05 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/22 22:55:47 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int			i;
	char		*dst_str;
	const char	*src_str;

	dst_str = dst;
	src_str = src;
	i = 0;
	while (dst_str[i] && src_str[i] && n--)
	{
		*(dst_str + i) = *(src_str + i);
		i++;
	}
	dst = dst_str;
	return (dst);
}

int				main(void)
{
	char dst[40];

	memset(dst, 'j', 40);
	ft_memcpy(dst,"abc\0defghijklmnopqrst",12);
	write(1, dst, 40); 



	return (0);	
}
