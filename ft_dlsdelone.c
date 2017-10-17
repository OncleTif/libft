/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:52:34 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/17 18:36:54 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlsdelone(t_dlst **alst, void (*del)(void **))
{
	t_dlst	*tmp;
	t_dlst	*nxt;

	if (alst)
	{
		nxt = NULL;
		tmp = *alst;
		ft_putstr("deleting:");
		if (tmp->cnt)
ft_putendl((char*)tmp->cnt);
		del(&tmp->cnt);
		if (tmp->nxt)
		{
			nxt = tmp->nxt;
			nxt->prv = tmp->prv;
		}
		if (tmp->prv)
			tmp->prv = nxt;
		ft_memdel((void**)alst);
		*alst = nxt;
	}
}
