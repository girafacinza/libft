/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:23:50 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/19 20:44:55 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies bytes from string 'src' to string 'dst'.
** If the character 'c' (as converted to an unsigned char) occurs in the
** string 'src', the copy stops and a pointer to the byte after the copy
** of 'c' in the string 'dst' is returned.
** Otherwise, 'n' bytes are copied, and a NULL pointer is returned.
** The source and destination strings should not overlap, as the behavior
** is undefined.
*/

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_dst;
	unsigned char	*str_src;

	str_src = (unsigned char *)src;
	str_dst = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		*(str_dst + i) = *(str_src + i);
		if (*(str_src + i) == (unsigned char)c)
			return ((void *)(str_dst + i + 1));
		i++;
	}
	return (0);
}
