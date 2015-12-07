/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 10:06:46 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/07 10:48:43 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*ptr;

	ptr = NULL;
	if (s && f)
	{
		i = ft_strlen(s);
		ptr = ft_strnew(i + 1);
		if (!ptr)
			return (NULL);
		i = 0;
		while (s[i])
		{
			ptr[i] = f(s[i]);
			i++;
		}
	}
	return (ptr);
}
