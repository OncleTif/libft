/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longrange_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:27:47 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/20 17:28:25 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long		ft_longrange_base(unsigned long nbr, unsigned int base)
{
	long range;

	range = 1;
	while (nbr >= (base))
	{
		range = range * base;
		nbr = nbr / base;
	}
	return (range);
}
