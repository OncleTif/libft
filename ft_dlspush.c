/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlspush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:49:24 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/11 11:51:40 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlspush(t_dlst **alst, t_dlst *new)
{
	if (new && alst)
	{
		new->nxt = *alst;
		if (new->nxt)
			new->nxt->prv = new;
		*alst = new;
	}
}
