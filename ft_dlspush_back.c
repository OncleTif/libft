/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlspush_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:53:14 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/11 11:55:00 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlspush_back(t_dlst **alst, t_dlst *new)
{
	t_dlst	*elem;

	if (alst && new)
	{
		elem = *alst;
		if (elem)
		{
			while (elem->nxt)
				elem = elem->nxt;
			elem->nxt = new;
			new->prv = elem;
		}
		else
			*alst = new;
	}
}
