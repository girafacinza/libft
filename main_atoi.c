/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:35:46 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/24 19:26:32 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

#define INT_MAX "2147483647"
#define INT_MIN "-2147483648"

int		ft_isdigit(unsigned char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int		ft_isspace(const char str)
{
	return ((str == '\t' || str == '\n' || str == '\v' ||
			str == '\f' || str == '\r' || str == ' ') ? (1) : (0));
}

int		ft_atoi(const char *str)
{
	long int	nbr;
	int			signe;

	nbr = 0;
	signe = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		nbr = nbr * 10 + (*str - 48);
		str++;
	}
	nbr *= signe;
	return (nbr);
}

int main(void)
{
	printf("%d\n", atoi("12342"));
	printf("%d\n", atoi(INT_MAX));
	printf("%d\n", atoi(INT_MIN));
	printf("%d\n", atoi("\n-412"));
	printf("%d\n", atoi("  	-42"));
	printf("%d\n", atoi("  	-   642"));
	printf("%d\n", atoi("- 72"));
	printf("%d\n", atoi("--212"));
	printf("%d\n", atoi("a2112"));
	printf("%d\n", atoi("-"));
}
