/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 19:07:57 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/11 19:50:04 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes 'len' bytes of value 'c' (converted to an unsigned char) to
** the string 'b'.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = b;
	while (len > 0)
	{
		*(str + i) = (unsigned char)c;
		i++;
		len--;
	}
	b = str;
	return (b);
}
