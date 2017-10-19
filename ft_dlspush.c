/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlspush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:49:24 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/19 12:31:40 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlspush(t_dlst **alst, t_dlst *new)
{
	t_dlst	*cur;

	if (new && alst)
	{
		cur = *alst;
		new->nxt = cur;
		if (cur)
		{
			new->prv = cur->prv;
			cur->prv = new;
			if (new->prv)
				new->prv->nxt = new;
		}
		*alst = new;
	}
}
