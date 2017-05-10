/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 14:02:47 by tmanet            #+#    #+#             */
/*   Updated: 2017/05/10 14:35:26 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsort(t_list **head, int (*f)(t_list *, t_list *))
{
	int		sorted;
	t_list	**elem;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		elem = head;
		while ((*elem)->next)
		{
			if (f(*elem, (*elem)->next) > 0)
			{
				sorted = 0;
				ft_lstswap(elem);
			}
			elem = &((*elem)->next);
		}
	}
}
