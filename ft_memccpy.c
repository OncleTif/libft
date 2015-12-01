/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 11:53:30 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/01 12:08:29 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*src_char;
	char			*dst_char;
	unsigned char	pattern;

	i = 0;
	src_char = (char*)src;
	dst_char = (char*)dst;
	pattern = (char)c;
	while (i < n && src_char[i] != pattern)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	if (src_char[i] == pattern)
	{
		return (dst_char[i + 1]
				}
				return (NULL);
				}
