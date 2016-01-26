/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 15:27:27 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/26 15:28:26 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnchar(char *str, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (j < size)
	{
		ft_putchar(str[i]);
		if (str[i])
			i++;
		j++;
	}
}

