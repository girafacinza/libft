/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 19:15:46 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/04 11:17:05 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intsize(int n, int size)
{
	if (n < 10)
		return (size + 1);
	return (ft_intsize(n / 10, size + 1));
}

char		*ft_itoa(int n)
{
	char	*nbr;
	int		size;
	int		i;

	if (n < 0)
	{
		i = 1;
		n = -n;
	}
	else
		i = 0;
	size = ft_intsize(n, i);
	if (NULL != (nbr = (char *)malloc((size + 1) * sizeof(char))))
	{
		if (i == 1)
			nbr[0] = '-';
		nbr[size--] = '\0';
		while (size >= i)
		{
			nbr[size] = (n % 10) + 48;
			n /= 10;
			size--;
		}

		return (nbr);
	}
	return (NULL);
}
