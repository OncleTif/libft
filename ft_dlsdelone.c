/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:52:34 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/12 15:53:18 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlsdelone(t_dlst **alst, void (*del)(void *))
{
	t_dlst	*tmp;

	if (alst)
	{
		tmp = *alst;
		del(tmp->cnt);
		ft_memdel((void**)alst);
		*alst = NULL;
	}
}
