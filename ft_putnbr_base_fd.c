/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:41:37 by tmanet            #+#    #+#             */
/*   Updated: 2017/02/06 11:32:41 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbrchar(char c, int fd)
{
	if (c < 10)
		ft_putchar_fd(c + '0', fd);
	else
		ft_putchar_fd(c + 'A' - 10, fd);
}

void		ft_putnbr_base_fd(int n, int base, int fd)
{
	unsigned int	buf;
	int				range;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		buf = n * -1;
	}
	else
	{
		buf = n;
	}
	range = ft_range_base(buf, base);
	while (range)
	{
		putnbrchar(buf / range, fd);
		buf = buf % range;
		range = range / base;
	}
}
