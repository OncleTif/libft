/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:11:40 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/11 11:14:32 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lsnew(void *content)
{
	t_lst	*tmp;

	tmp = ft_memalloc(sizeof(t_lst));
	if (tmp)
	{
		tmp->cnt = content;
		tmp->nxt = NULL;
	}
	return (tmp);
}
