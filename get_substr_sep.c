/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_substr_sep.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 09:58:23 by tmanet            #+#    #+#             */
/*   Updated: 2017/08/07 10:26:56 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_substr_sep(const char *src, int pos, char sep)
{
	char	*ret;
	int		i;

	ret = NULL;
	i = 0;
	while (*src && i < pos)
	{
		if (*src == sep)
			i++;
		src++;
	}
	if (*src && i == pos)
		ret = ft_strdup_sep(src, sep);
	return (ret);
}
