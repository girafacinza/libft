/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 17:28:19 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/06 17:32:43 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	if (NULL != (ptr = (void *)malloc(count * size)))
	{
		ft_bzero(ptr, count * size);
		return (ptr);
	}
	return (NULL);
}
