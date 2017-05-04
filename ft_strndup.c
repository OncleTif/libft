/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 16:42:42 by tmanet            #+#    #+#             */
/*   Updated: 2017/05/03 16:42:47 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, int size)
{
	char	*ptr;

	ptr = ft_strnew(size + 1);
	if (!ptr)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptr = ft_strncpy(ptr, s1, size);
	ptr[size] = 0;
	return (ptr);
}
