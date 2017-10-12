/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:50:42 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/12 15:51:18 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlsdel(t_dlst **alst, void (*del)(void *))
{
	t_dlst	*tmp;

	if (alst && *alst)
	{
		tmp = *alst;
		if (tmp->nxt)
			ft_dlsdel(&tmp->nxt, del);
		ft_dlsdelone(alst, del);
	}
}
