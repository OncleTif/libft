/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 16:38:14 by tmanet            #+#    #+#             */
/*   Updated: 2017/03/01 16:44:38 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_ptrarray(void *arr, size_t nbr, size_t size)
{
	void	**ptr;
	size_t	i;

	ptr = (void**)ft_memalloc(nbr * sizeof(*ptr));
	if (!ptr)
		return (ptr);
	i = 0;
	while (i < nbr)
	{
		ptr[i] = arr + (i * size);
		i++;
	}
	return (ptr);
}
