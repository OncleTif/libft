/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsdel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:25:53 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/11 11:27:14 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lsdel(t_lst **alst, void (*del)(void *))
{
	t_lst	*tmp;

	if (alst && *alst)
	{
		tmp = *alst;
		if (tmp->nxt)
			ft_lsdel(&tmp->nxt, del);
		ft_lsdelone(alst, del);
	}
}
