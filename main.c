/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:19:23 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/02 10:43:08 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	int		i;
	int		result;

	i = 1;
	while (argc > i)
	{
		result = atoi(argv[i]);
		printf("%d", result);
		ft_putnbr(result);
		ft_putchar('\n');
		result = ft_atoi(argv[i]);
		ft_putnbr(result);
		ft_putchar('\n');
		i++;
	}
	return (argc * 0);
}
