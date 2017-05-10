/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 14:17:38 by tmanet            #+#    #+#             */
/*   Updated: 2017/05/10 14:28:48 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstswap(t_list **head)
{
	t_list	*swp;

	swp = *head;
	*head = (swp)->next;
	swp->next = (*head)->next;
	(*head)->next = swp;
}
