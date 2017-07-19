/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strltrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 11:35:53 by tmanet            #+#    #+#             */
/*   Updated: 2017/07/19 11:35:55 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strltrim(char *str)
{
	if (!str)
		return (NULL);
	while (*str && *str == ' ')
		str++;
	if (*str)
		return (str);
	return (NULL);
}
