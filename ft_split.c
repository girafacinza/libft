/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <lambrozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 19:04:00 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/11 22:08:44 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns an array of strings obtained by splitting 's'
** using the character 'c' as a delimiter.
** The array must be ended by a NULL pointer.
*/

char		*ft_ctos(char c)
{
	char	*str;

	if (!(str = (char *)malloc(2 * sizeof(char))))
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

static int	ft_countstr(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			while (*(s + i) != c && *(s + i))
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_alocateword(char *buf, char c, char **array, int word)
{
	int i;
	int size;

	i = 0;
	while (*buf == c)
		buf++;
	while (*(buf + i))
	{
		if (*(buf + i) == c || *(buf + i + 1) == '\0')
		{
			size = (*(buf + i + 1) == '\0') ? (i + 1) : i;
			if (!(array[word] = (char *)malloc((size + 1) * sizeof(char))))
			{
				while (--word >= 0)
					free(array[word]);
				return (NULL);
			}
			array[word][size] = '\0';
			while (--size >= 0)
				array[word][size] = *(buf + size);
			return (buf + i);
		}
		i++;
	}
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**array;
	char	*buf;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	buf = ft_strtrim(s, ft_ctos(c));
	words = ft_countstr(buf, c);
	if (!(array = (char **)malloc((words + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < words)
	{
		if (!(buf = ft_alocateword(buf, c, array, i)))
		{
			free(array);
			return (NULL);
		}
		i++;
	}
	array[i] = NULL;
	return (array);
}
