/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:41:37 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/07 16:46:13 by tmanet           ###   ########.fr       */
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

void	ft_putaddr_fd(void *n, int fd)
{
	unsigned long	buf;
	int				range;

		buf = (unsigned long)n;
	range = ft_range_base(buf, 16);
	while (range)
	{
		putnbrchar(buf / range, fd);
		buf = buf % range;
		range = range / 16;
	}
}
