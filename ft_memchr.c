/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:35:04 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/02 15:46:58 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_char;
	char	pattern;

	s_char = (char*)s;
	i = 0;
	pattern = (unsigned char)c;
	while (s_char[i] && s_char[i] != pattern)
		i++;
	if (s_char[i] == pattern)
		return ((void*)(s + i));
	return (NULL);
}
