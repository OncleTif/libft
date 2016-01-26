/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 10:02:17 by exam              #+#    #+#             */
/*   Updated: 2016/01/25 11:30:48 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static	void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
	write(1, &"\n", 1);
}

static char		ft_rethexa(char nbr)
{
	if (nbr < 10)
		return (nbr + '0');
	return (nbr + 'a' - 10);
}

void			print_memory(const void *addr, size_t size)
{
	unsigned char	*str;
	char			line[56 + 1];
	size_t			i;
	size_t			j;
	size_t			esc;

	str = (unsigned char*)addr;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 56)
		{
			line[j] = ' ';
			j++;
		}
		line[56] = 0;
		j = 0;
		esc = 0;
		while (i < size && j < 16)
		{
			line[j * 2 + esc] = ft_rethexa(str[i] / 16);
			line[j * 2 + 1 + esc] = ft_rethexa(str[i] % 16);
			if (str[i] >= ' ' && str[i] <= '~')
				line[40 + j] = str[i];
			else
				line[40 + j] = '.';
			if (i % 2)
				esc++;
			i++;
			j++;
		}
		if (i == size)
			line[40 + size % 16] = 0;
		ft_putstr(line);
	}
}
