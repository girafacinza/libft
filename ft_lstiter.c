/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 18:49:51 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/04 18:55:01 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *alist;

	if (!lst)
		return ;
	alist = lst;
	while (alist != NULL)
	{
		f(alist->content);
		alist = alist->next;
	}
}
