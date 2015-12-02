/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:50:41 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/02 16:28:29 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s1);
	ptr = ft_strnew(size);
	if (!ptr)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptr = ft_strcpy(ptr, s1);
	return (NULL);
}
