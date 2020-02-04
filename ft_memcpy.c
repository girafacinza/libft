/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:44:05 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/30 20:06:42 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*dst_str;
	const char	*src_str;

	if (!src && !dst)
		return (NULL);
	dst_str = dst;
	src_str = src;
	i = 0;
	while (n--)
	{
		*(dst_str + i) = *(src_str + i);
		i++;
	}
	dst = dst_str;
	return (dst);
}
