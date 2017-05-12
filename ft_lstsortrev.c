/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsortrev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 14:47:42 by tmanet            #+#    #+#             */
/*   Updated: 2017/05/12 16:09:32 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsortrev(t_list **head, int (*f)(t_list *, t_list *))
{
	int		sorted;
	t_list	**elem;

	if (*head)
	{
		sorted = 0;
		while (!sorted)
		{
			sorted = 1;
			elem = head;
			while ((*elem)->next)
			{
				if (f(*elem, (*elem)->next) < 0)
				{
					sorted = 0;
					ft_lstswap(elem);
				}
				elem = &((*elem)->next);
			}
		}
	}
}
