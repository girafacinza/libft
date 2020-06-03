/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 17:45:00 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/11 20:10:20 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates sufficient memory for a copy of the string 's1', does
** the copy, and returns a pointer to it.
** The pointer may subsequently be used as an argument to the function free.
** If insufficient memory is available, NULL is returned
*/

char			*ft_strdup(const char *s1)
{
	char	*s1_cpy;
	size_t	len;
	size_t	i;

	if (!s1)
		return (NULL);
	len = ft_strlen((char *)s1);
	i = 0;
	if (!(s1_cpy = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len)
	{
		*(s1_cpy + i) = *(s1 + i);
		i++;
	}
	*(s1_cpy + i) = '\0';
	return (s1_cpy);
}
