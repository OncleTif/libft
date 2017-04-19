/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 13:31:28 by tmanet            #+#    #+#             */
/*   Updated: 2017/04/19 17:09:06 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printchar_fd(char c, int fd)
{
	ft_putchar_fd(ft_ctop((unsigned char)c / 16), fd);
	ft_putchar_fd(ft_ctop((unsigned char)c % 16), fd);
}
