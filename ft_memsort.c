/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 15:41:19 by tmanet            #+#    #+#             */
/*   Updated: 2017/02/27 15:41:21 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memsort(void **tab, int size, int (*f)(void *, void *))
{
	int		i;
	int		sorted;
	void	*buf;

	sorted = 0;
	while (!sorted)
	{
		i = 1;
		sorted = 1;
		while (i < size)
		{
			if (f(tab[i - 1], tab[i]))
			{
				sorted = 0;
				buf = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = buf;
			}
			i++;
		}
	}
}
