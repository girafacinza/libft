/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:41:20 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/19 20:49:06 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Appends string 'src' to the end of 'dst'. It will append at most
** 'dstsize' - strlen('dst') - 1 characters.
** It will then NUL-terminate, unless 'dstsize' is 0 or the original
** 'dst' string was longer than 'dstsize'.
** If the 'src' and 'dst' strings overlap, the behavior is undefined.
*/

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	while (*dst && dstsize)
	{
		dst++;
		dstsize--;
		i++;
	}
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	if (dstsize)
		*dst++ = '\0';
	return (i + len);
}
