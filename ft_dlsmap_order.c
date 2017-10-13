/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsmap_order.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 11:35:55 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/13 11:40:29 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlst	*ft_dlsmap_order(void *ptr, t_dlst *(*f)(void **),
		void *(fs)(t_dlst**, t_dlst*))
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
			fs(&tmp, nxt);
		}
	}
	return (tmp);
}
