/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:14:01 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/02 13:24:42 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{

if (dst > src && dst < src + len)
{

}
else
ft_memcpy(dst, src, len);
return (dst);
}
