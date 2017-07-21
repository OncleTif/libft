/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraystrdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 11:20:14 by tmanet            #+#    #+#             */
/*   Updated: 2017/07/21 11:25:24 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arraystrdel(char ***pas)
{
	int	i;

	if (pas)
	{
		i = 0;
		while (pas[i])
		{
			ft_strdel(pas[i]);
			i++;
		}
		ft_memdel((void**)pas);
	}
}
