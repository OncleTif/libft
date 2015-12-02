/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:23:56 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/02 14:47:18 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1_char;
	char	*s2_char;

	i = 0;
	s1_char = (char*)s1;
	s2_char = (char*)s2;
	while (s1_char[i] == s2_char[i] && i < n)
		i++;
	return ((unsigned char)s1_char[i] - (unsigned char)s2_char[i]);
}
