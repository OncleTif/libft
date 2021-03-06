/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraystrdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 11:20:14 by tmanet            #+#    #+#             */
/*   Updated: 2017/07/24 20:33:18 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arraystrdel(char ***pas)
{
	int		i;
	char	**as;

	as = *pas;
	if (as)
	{
		i = 0;
		while (as[i])
		{
			ft_strdel(as + i);
			i++;
		}
		ft_memdel((void**)pas);
	}
}
