/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsmap_order.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 11:35:55 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/13 12:15:42 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlst	*ft_dlsmap_order(void *ptr, t_dlst *(*f)(void **),
		void (*fs)(t_dlst**, t_dlst*))
{
	t_dlst	*new;
	t_dlst	*lst;

	lst = NULL;
	if (ptr && f)
	{
		new = f(&ptr);
		if (new)
		{
			lst = ft_dlsmap_order(ptr, f, fs);
			fs(&lst, new);
		}
	}
	return (lst);
}
