/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 19:15:46 by lambrozi          #+#    #+#             */
/*   Updated: 2020/06/01 09:33:57 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a string representing the unsigned integer received as
** an argument, changing his base to *base.
*/

static size_t	ft_intsize(size_t n, size_t size, size_t n_base)
{
	if (n < n_base)
		return (size + 1);
	return (ft_intsize(n / n_base, size + 1, n_base));
}

char			*ft_itoa_base_u(size_t n, char const *base)
{
	char		*nbr;
	size_t		size;
	size_t		n_base;

	n_base = ft_strlen(base);
	size = ft_intsize(n, 0, n_base);
	if (!(nbr = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	nbr[size--] = '\0';
	while (n >= n_base)
	{
		nbr[size--] = base[n % n_base];
		n /= n_base;
	}
	nbr[size] = base[n % n_base];
	return (nbr);
}
