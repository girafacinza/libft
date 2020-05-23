/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:11:26 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/19 22:03:45 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of the null-terminated string 'needle'
** in the string 'haystack', where not more than 'len' characters are searched.
** Characters that appear after a `\0' character are not searched.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!*(needle))
		return ((char *)(haystack));
	while (len && haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		else
		{
			i -= j;
			len += j;
			j = 0;
		}
		if (!needle[j])
			return ((char *)haystack + i - j + 1);
		i++;
		len--;
	}
	return (NULL);
}
