/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsiterparam.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 11:02:35 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/12 11:03:38 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lsiterparam(t_lst *lst, void *parm, void (*f)(t_lst *elem, void *pa))
{
	if (f && lst)
	{
		f(lst, parm);
		ft_lsiterparam(lst->nxt, f, parm);
	}
}
