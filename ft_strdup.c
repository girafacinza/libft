/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 17:45:00 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/30 23:10:59 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s1)
{
	char	*s1_cpy;
	size_t	len;
	size_t	i;

	len = ft_strlen((char *)s1);
	i = 0;
	if (NULL != (s1_cpy = (char *)malloc((len + 1) * sizeof(char))))
	{
		while (i < len)
		{
			*(s1_cpy + i) = *(s1 + i);
			i++;
		}
		*(s1_cpy + i) = '\0';
		return (s1_cpy);
	}
	return (NULL);
}
