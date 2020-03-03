/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 21:37:51 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/19 22:28:14 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts the initial portion of the string pointed to by 'str' to int
** representation.
*/

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int			nbr;
	int			signal;
	int			aux;

	nbr = 0;
	aux = 0;
	signal = -1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			signal = 1;
	while (ft_isdigit(*str))
	{
		nbr = nbr * 10 - (*str++ - 48);
		if (aux < nbr)
		{
			return (signal < 0) ? -1 : 0;
		}
		aux = nbr;
	}
	return (nbr * signal);
}
