/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rangelength.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 17:43:16 by tmanet            #+#    #+#             */
/*   Updated: 2017/03/13 17:43:19 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_rangelength(int size, unsigned int base)
{
	unsigned long	range;
	int				i;

	range = 1;
	i = 0;
	while (i < size)
	{
		range = range * base;
		i++;
	}
	return (range);
}
