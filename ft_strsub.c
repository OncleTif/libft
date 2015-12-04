/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 10:31:27 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/04 10:45:43 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = ft_strnew(len + 1);
	if (!ptr)
		return (NULL);
	while (s[i] && start + i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}
