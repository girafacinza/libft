/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:01:23 by jtoty             #+#    #+#             */
/*   Updated: 2020/01/23 20:08:00 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n);

int				main(void)
{
	char	*mem;

	alarm(5);
	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';
	memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
	printf("%s\n", mem);
	memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 3);
	printf("%s\n", mem);
	memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'a', 26);
	printf("%s\n", mem);
	memccpy(mem, "zyxwvuzyxwvu", 'x', 20);
	printf("%s\n", mem);
	return (0);
}
