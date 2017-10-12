/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 13:22:56 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/12 13:40:01 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlst	*ft_dlsmap(void *ptr, t_dlst *(*f)(void **))
{
	t_dlst	*tmp;
	t_dlst	*nxt;

	tmp = NULL;
	if (ptr && f)
	{
		tmp = f(&ptr);
		if (tmp)
		{
			nxt = ft_dlsmap(ptr, f);
			ft_dlspush_back(&tmp, nxt);
		}
	}
	return (tmp);
}
