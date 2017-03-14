/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnaddr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 17:28:36 by tmanet            #+#    #+#             */
/*   Updated: 2017/03/14 10:37:58 by tmanet           ###   ########.fr       */
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
	uint64_t		rang;
	int				i;

	buf = (unsigned long)n;
	i = 1;
	rang = 1;
	while (i < size)
	{
		rang = rang * (uint64_t)16;
		i++;
	}
	while (rang != (uint64_t)0)
	{
		ft_putnbrchar(buf / rang, fd);
		buf = buf % rang;
		rang = rang / 16;
	}
}
