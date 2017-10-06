/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 18:45:50 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/06 18:46:08 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	last_char(char *str)
{
	if (!str || !*str)
		return (0);
	return (str[ft_strlen(str) - 1]);
}