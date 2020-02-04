/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:11:26 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/30 23:17:15 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!*(needle))
		return ((char *)(haystack));
	while (len-- && haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		else
			i -= j;
		if (!needle[j])
			return ((char *)haystack + i - j + 1);
		i++;
	}
	return (NULL);
}
