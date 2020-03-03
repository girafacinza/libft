/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 19:07:57 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/19 19:48:06 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes 'len' bytes of value 'c' (converted to an unsigned char) to
** the string 'b'.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*str;
	unsigned long int	i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*str = (unsigned char)c;
		i++;
		str++;
	}
	return (b);
}
