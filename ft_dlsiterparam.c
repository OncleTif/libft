/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlsiterparam.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 11:09:04 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/12 11:09:55 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlsiterparam(t_dlst *lst, void *param, void (*f)(t_dlst *, void *))
{
	if (f && lst)
	{
		f(lst, param);
		ft_dlsiterparam(lst->nxt, param, f);
	}
}
