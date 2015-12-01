/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 10:42:23 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/01 11:20:09 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int neg;

	i = 0;
	nbr = 0;
	neg = 1;
	if (str[0] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]))
		{
			nbr = nbr * 10 + (str[i] - '0');
		}
		i++;
	}
	return (nbr);
}
