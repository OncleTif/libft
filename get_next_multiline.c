/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_multiline.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 10:48:51 by tmanet            #+#    #+#             */
/*   Updated: 2017/10/11 10:49:26 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_next_multiline(int fd, char **str_add)
{
	char	*buf;
	char	*sum;
	int		ret;

	ret = get_next_line(fd, &buf);
	if (ret > 0)
	{
		sum = buf;
		while (last_char(sum) == '\\' && ((get_next_line(fd, &buf) > 0)))
		{
			sum[ft_strlen(sum) - 1] = '\n';
			sum = ft_strjoin_clean(sum, buf);
		}
		*str_add = sum;
	}
	return (ret);
}
