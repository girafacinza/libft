/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 19:41:49 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/11 22:06:55 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies 'len' bytes from string 'src' to string 'dst'.
** The two strings may overlap; the copy is always done in a
** non-destructive manner.
*/

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_str;
	const char	*src_str;
	size_t		l;

	if (!src && !dst)
		return (NULL);
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
