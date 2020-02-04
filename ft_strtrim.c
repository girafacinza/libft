/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:13:32 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/04 11:15:05 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_starttrim(char const *s1, char const *set)
{
	int start;
	int i;
	int j;

	i = 0;
	start = 0;
	while (*(s1 + i) && start == i)
	{
		j = 0;
		while (*(set + j) && start == i)
		{
			if (*(s1 + i) == *(set + j))
				start = i + 1;
			j++;
		}
		i++;
	}
	return (start);
}

static int	ft_endtrim(char const *s1, char const *set, int start)
{
	int end;
	int i;
	int j;

	end = ft_strlen((char *)s1) - 1;
	i = end;
	while (i > start && end == i)
	{
		j = 0;
		while (*(set + j) && end == i)
		{
			if (*(s1 + i) == *(set + j))
				end = i - 1;
			j++;
		}
		i--;
	}
	return (end);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = ft_starttrim(s1, set);
	end = ft_endtrim(s1, set, start);
	if (NULL != (str = (char *)malloc((end - start + 2) * sizeof(char))))
	{
		i = 0;
		while (start <= end)
		{
			*(str + i) = s1[start];
			start++;
			i++;
		}
		*(str + i) = '\0';
		return (str);
	}
	return (NULL);
}
