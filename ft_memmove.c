/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 19:41:49 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/19 20:00:32 by lambrozi         ###   ########.fr       */
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
	char	*dst_str;
	char	*src_str;
	size_t	i;

	src_str = (char *)src;
	dst_str = (char *)dst;
	if (src_str < dst_str)
	{
		i = len;
		while (i > 0)
		{
			dst_str[i - 1] = src_str[i - 1];
			i--;
		}
	}
	else if (src_str > dst_str)
	{
		i = 0;
		while (i < len)
		{
			dst_str[i] = src_str[i];
			i++;
		}
	}
	return (dst);
}
