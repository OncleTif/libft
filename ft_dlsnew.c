/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:47:17 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/11 11:47:42 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlst	*ft_dlsnew(void *content)
{
	t_dlst	*tmp;

	tmp = ft_memalloc(sizeof(t_dlst));
	if (tmp)
	{
		tmp->cnt = content;
		tmp->nxt = NULL;
		tmp->prv = NULL;
	}
	return (tmp);
}
