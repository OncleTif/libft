/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:33:28 by tmanet            #+#    #+#             */
/*   Updated: 2017/08/09 17:49:34 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dprintf(int fd, char *str, ...)
{
	int			i;
	t_param		*param;
	t_str_conv	*sub;
	t_str_conv	*firstsub;
	va_list		ap;

	i = 0;
	va_start(ap, str);
	param = ft_param_builder();
	sub = ft_strsplit_to_conv(str, param, ap);
	firstsub = sub;
	while (sub)
	{
		if (sub->error)
			return (ft_param_cleaner(&param, &firstsub));
		if (sub->str_out)
			write(fd, sub->str_out, sub->size);
		i = i + sub->size;
		sub = sub->next;
	}
	ft_param_cleaner(&param, &firstsub);
	va_end(ap);
	return (i);
}
