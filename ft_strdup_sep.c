/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_sep.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:17:41 by tmanet            #+#    #+#             */
/*   Updated: 2017/08/07 10:28:49 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_sep(const char *str, char sep)
{
	char	*ret;
	size_t	size;

	size = ft_strlen_sep(str, sep);
	ret = ft_strnew(size);
	if (!ret)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ret = ft_strncpy(ret, str, size);
	return (ret);
}
