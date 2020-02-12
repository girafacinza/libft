/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 19:15:46 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/11 20:18:06 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Allocates and returns a string representing the integer received as
** an argument. Negative numbers must be handled.
*/

static int	ft_intsize(long long n, int size)
{
	if (n < 10)
		return (size + 1);
	return (ft_intsize(n / 10, size + 1));
}

char		*ft_itoa(int n)
{
	char		*nbr;
	int			size;
	int			i;
	long long	num;

	i = (n < 0) ? 1 : 0;
	num = (n < 0) ? (long long)n * -1 : (long long)n;
	size = ft_intsize(num, i);
	if (!(nbr = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	if (i == 1)
		nbr[0] = '-';
	nbr[size] = '\0';
	while (--size >= i)
	{
		nbr[size] = (num % 10) + 48;
		num /= 10;
	}
	return (nbr);
}
