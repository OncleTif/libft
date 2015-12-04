/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:02:05 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/04 12:13:57 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	j = i;
	while (s[j] && s[j] != ' ' && s[j] != '\n' && s[j] != '\t')
		j++;
	ptr = ft_strsub(s, i, j - i);
	if (!ptr)
		return (NULL);
	return (ptr);
}
