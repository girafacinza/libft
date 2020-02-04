/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:35:46 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/04 12:08:25 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;

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
