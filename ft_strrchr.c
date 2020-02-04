/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 13:28:46 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/25 13:33:35 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen((char *)s);
	if ((char)c == '\0')
		return ((char *)(s + len));
	while (len--)
	{
		if (*(s + len) == (const char)c)
			return ((char *)(s + len));
	}
	return (NULL);
}
