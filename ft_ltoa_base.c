/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:31:01 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/20 17:48:24 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ultoaa_base(unsigned long nbr, char *ptr, unsigned int base)
{
	int				i;
	long			range;
	long			digit;

	i = 0;
	range = ft_longrange_base(nbr, base);
	while (range)
	{
		digit = nbr / range;
		if (digit < 10)
			ptr[i] = digit + '0';
		else
			ptr[i] = digit + 'A' - 10;
		nbr = nbr % range;
		range = range / base;
		i++;
	}
}

char		*ft_ltoa_base(long n, unsigned int base)
{
	int				neg;
	unsigned int	nbr;
	size_t			size;
	char			*ptr;
	int				i;

	i = 0;
	neg = 1;
	if (n < 0)
		neg = -1;
	nbr = n * neg;
	size = ft_longsize_base(nbr, base);
	ptr = ft_strnew(size + (neg == -1));
	if (!ptr)
		return (NULL);
	if (neg == -1)
	{
		ptr[i] = '-';
		i++;
	}
	ft_ultoaa_base(nbr, ptr + i, base);
	return (ptr);
}
