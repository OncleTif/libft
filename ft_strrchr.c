/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 15:57:38 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/01 16:13:20 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(char const *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char*)&s[i]);
		i--;
	}
	return (NULL);
}
