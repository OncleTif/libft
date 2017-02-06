/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rangelong_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:25:32 by tmanet            #+#    #+#             */
/*   Updated: 2017/02/06 14:04:44 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_rangelong_base(unsigned long nbr, unsigned int base)
{
	unsigned long	range;

	range = 1;
	while (nbr >= (base))
	{
		range = range * base;
		nbr = nbr / base;
	}
	return (range);
}
