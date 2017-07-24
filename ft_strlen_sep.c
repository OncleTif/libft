/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_sep.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 17:50:38 by tmanet            #+#    #+#             */
/*   Updated: 2017/07/24 17:50:41 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_sep(const char *s, const char c)
{
	size_t	length;

	length = 0;
	while (s[length] && s[length] != c)
	{
		length++;
	}
	return (length);
}
