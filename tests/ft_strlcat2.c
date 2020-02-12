/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:41:20 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/11 22:34:34 by lambrozi         ###   ########.fr       */
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
	size_t cont_dst;
	size_t cont_src;

	cont_dst = 0;
	cont_src = 0;
	while (*(dst + cont_dst) != '\0')
		cont_dst++;
	while (dstsize > cont_src + cont_dst + 1 && *(src + cont_src) != '\0')
	{
		*(dst + cont_dst + cont_src) = *(src + cont_src);
		cont_src++;
	}
	*(dst + cont_dst + cont_src) = '\0';
	while (*(src + cont_src) != '\0')
		cont_src++;
	if (dstsize < cont_dst)
		return (dstsize + cont_src);
	return (cont_dst + cont_src);
}
