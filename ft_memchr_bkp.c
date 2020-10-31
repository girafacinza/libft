/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:35:01 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/23 21:27:54 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	char		*dst;
	int			i;
	int			ok;

	i = 0;
	ok = 0;
	dst = NULL;
	str = s;
	while (n--)
	{
		if (*str == (unsigned char)c)
		{
			ok = 1;
			break;
		}
		str++;
	}
	if (ok)
	{
		while (*str != '\0')
		{
			*dst = *str;
			dst++;
			str++;
		}
	}
	return (dst);
}
