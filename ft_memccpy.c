/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:23:50 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/30 20:14:18 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int						i;
	unsigned char			*str_dst;
	const unsigned char		*str_src;
	unsigned char			ch;

	str_src = (unsigned char *)src;
	str_dst = (unsigned char *)dst;
	ch = (unsigned char)c;
	i = 0;
	while (n-- && *(str_src + i - 1) != ch)
	{
		*(str_dst + i) = *(str_src + i);
		i++;
	}
	if (*(str_dst + i - 1) == ch)
	{
		dst = str_dst;
		return (&str_dst[i]);
	}
	return (NULL);
}
