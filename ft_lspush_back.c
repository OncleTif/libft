/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lspush_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:17:49 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/11 11:19:03 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lspush_back(t_lst **alst, t_lst *new)
{
	t_lst	*elem;

	if (alst && new)
	{
		elem = *alst;
		if (elem)
		{
			while (elem->nxt)
				elem = elem->nxt;
			elem->nxt = new;
		}
		else
			*alst = new;
	}
}
