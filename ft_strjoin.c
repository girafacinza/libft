/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 22:39:45 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/30 23:14:13 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1);
	len += ft_strlen((char *)s2);
	if (NULL != (str = (char *)malloc(sizeof(char) * len)))
	{
		while (*s1)
		{
			*str = *s1;
			s1++;
			str++;
		}
		while (*s2)
		{
			*str = *s2;
			s2++;
			str++;
		}
		return (str - len);
	}
	free(str);
	return (NULL);
}
