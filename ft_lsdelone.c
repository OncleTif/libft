/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsdelone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:28:38 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/11 11:31:10 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lsdelone(t_lst **alst, void (*del)(void *))
{
	t_lst	*tmp;

	if (alst)
	{
		tmp = *alst;
		del(tmp->cnt);
		ft_memdel((void**)alst);
		*alst = NULL;
	}
}
