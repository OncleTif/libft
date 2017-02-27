/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 13:55:11 by tmanet            #+#    #+#             */
/*   Updated: 2017/02/27 14:48:37 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strsort(char **tab, int nb)
{
	int		sorted;
	int		i;
	char	*buf;

	sorted = 0;
	while (!sorted)
	{
		i = 1;
		sorted = 1;
		while (i < nb)
		{
			if (ft_strcmp(tab[i - 1], tab[i]) > 0)
			{
				buf = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = buf;
				sorted = 0;
			}
			i++;
		}
	}
}
