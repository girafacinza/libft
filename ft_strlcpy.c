/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:35:46 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/11 21:01:57 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies up to 'dstsize' - 1 characters from the string 'src' to 'dst',
** NUL-terminating the result if 'dstsize' is not 0.
*/

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	if (!src)
		return (0);
	len = 0;
	while (len + 1 < dstsize && *(src + len))
	{
		*(dst + len) = *(src + len);
		len++;
	}
	if (dstsize != 0)
		*(dst + len) = '\0';
	while (*(src + len))
		len++;
	return (len);
}
