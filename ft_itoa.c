/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 12:48:41 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/04 13:13:46 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				neg;
	unsigned int	nbr;
	size_t			range;
	char			*ptr;
	int				i;

	i = 0;
	neg = 1;
	if (n < 0)
		neg = -1;
	nbr = n * neg;
	range = ft_range(nbr);
	ptr = ft_strnew(range + 1 + (neg == -1));
	if (!ptr)
		return (NULL);
	if (neg == -1)
	{
		ptr[i] = '-';
		i++;
	}
	while (range)
	{
		ptr[i] = nbr / range + '0';
		nbr = nbr % range;
		range = range / 10;
		i++;
	}
	return (ptr);
}
