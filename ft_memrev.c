/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 18:06:09 by tmanet            #+#    #+#             */
/*   Updated: 2017/03/16 16:28:17 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_memrev(char *buf, size_t count)
{
	char	*r;

	r = buf + count - 1;
	while (buf < r)
	{
		*buf ^= *r;
		*r ^= *buf;
		*buf ^= *r;
		buf++;
		r--;
	}
}
