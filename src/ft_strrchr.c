/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 13:28:46 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/11 21:21:38 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of 'c' (converted to a char) in the string
** pointed to by 's'. The terminating null character is considered to be
** part of the string; therefore if 'c' is `\0', the functions locate the
** terminating `\0'.
** The strrchr() function is identical to strchr(), except it locates the last
** occurrence of c.
*/

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
