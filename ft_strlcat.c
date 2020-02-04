/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:41:20 by lambrozi          #+#    #+#             */
/*   Updated: 2020/01/21 18:39:36 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcat(char *dst, char *src, unsigned int dstsize)
{
	unsigned long cont_dst;
	unsigned long cont_src;

	cont_dst = 0;
	cont_src = 0;
	while (*(dst + cont_dst) != '\0')
		cont_dst++;
	while (dstsize > cont_src + cont_dst + 1 && *(src + cont_src) != '\0')
	{
		*(dst + cont_dst + cont_src) = *(src + cont_src);
		cont_src++;
	}
	*(dst + cont_dst + cont_src) = '\0';
	while (*(src + cont_src) != '\0')
		cont_src++;
	if (dstsize < cont_dst)
		return (dstsize + cont_src);
	return (cont_dst + cont_src);
}
