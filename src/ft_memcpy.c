/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:44:05 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/15 13:41:59 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies 'n' bytes from memory area 'src' to memory area 'dst'.
** If 'dst' and 'src' overlap, behavior is undefined.
** Applications in which 'dst' and 'src' might overlap should use
** ft_memmove instead.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_str;
	unsigned char	*src_str;

	if (!src && !dst)
		return (NULL);
	dst_str = (unsigned char*)dst;
	src_str = (unsigned char*)src;
	while (n-- && dst != src)
		*dst_str++ = *src_str++;
	return (dst);
}
