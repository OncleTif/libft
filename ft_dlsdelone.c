/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:52:34 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/17 21:11:06 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlsdelone(t_dlst **alst, void (*del)(void **))
{
	t_dlst	*tmp;
	t_dlst	*nxt;

	if (alst && *alst)
	{
		tmp = *alst;
		nxt = tmp->nxt;
		del(&tmp->cnt);
		if (tmp->nxt)
			nxt->prv = tmp->prv;
		if (tmp->prv)
			tmp->prv->nxt = nxt;
		ft_memdel((void**)alst);
		*alst = nxt;
	}
}
