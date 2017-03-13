/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnaddr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 17:28:36 by tmanet            #+#    #+#             */
/*   Updated: 2017/03/13 17:40:04 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbrchar(char c, int fd)
{
	if (c < 10)
		ft_putchar_fd(c + '0', fd);
	else
		ft_putchar_fd(c + 'a' - 10, fd);
}

void		ft_putnaddr_fd(void *n, int fd, int size)
{
	unsigned long	buf;
	unsigned long	range;
	unsigned long	frange;

	buf = (unsigned long)n;
	range = ft_rangelong_base(buf, 16);
	frange = ft_rangelength(size, 16);
	while (range <= frange / 16)
	{
		ft_putnbrchar(0, fd);
		frange = frange / 16;
	}
	while (range != 0)
	{
		ft_putnbrchar(buf / range, fd);
		buf = buf % range;
		range = range / 16;
	}
}
