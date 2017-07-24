/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_sep.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 17:07:35 by tmanet            #+#    #+#             */
/*   Updated: 2017/07/24 17:20:55 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ_sep(const char *s1, const char *s2, const char c)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && (s1[i] != c))
		i++;
	if (s1[i] == s2[i])
		return (1);
	if (s1[i] == c && !s2[i])
		return (1);
	if (s2[i] == c && !s1[i])
		return (1);
	return (0);
}
