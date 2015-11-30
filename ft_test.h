/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:53:28 by tmanet            #+#    #+#             */
/*   Updated: 2015/11/23 16:55:55 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

void	ft_putchar(char c);
void	ft_putstrup(char *str);
void	ft_putstrlow(char *str);
void	*ft_memset(void *b, int c, size_t len);
int		ft_toupper(int c);
char    *ft_strtoupper(char *str);
char    *ft_strtolower(char *str);
