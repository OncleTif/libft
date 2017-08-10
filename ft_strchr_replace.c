/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 16:14:14 by tmanet            #+#    #+#             */
/*   Updated: 2017/08/10 16:17:46 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_replace(char *str, char src, char dst)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == src)
			str[i] = dst;
		i++;
	}
	return (str);
}
