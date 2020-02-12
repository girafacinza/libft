/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 21:37:51 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/11 21:35:59 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts the initial portion of the string pointed to by 'str' to int
** representation.
*/

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long long	nbr;
	int			signal;
	int			i;

	i = 0;
	nbr = 0;
	signal = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = 10 * nbr + (str[i] - 48);
		i++;
	}
	nbr *= signal;
	return (nbr);
}
