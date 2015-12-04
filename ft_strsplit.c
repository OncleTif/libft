/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:25:56 by tmanet            #+#    #+#             */
/*   Updated: 2015/12/04 14:09:10 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	word;
	int		in_word;

	i = 0;
	word = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!in_word)
			{
				in_word = 1;
				word++;
			}
		}
		else
			in_word = 0;
		i++;
	}
	return (word);
}

char	*ft_word_split(char **cell, char const *str, char c)
{
	size_t	word_start;
	size_t	word_size;

	word_start = 0;
	while (str[word_start] == c)
		word_start++;
	word_size = ft_strchr(str + word_start, c) - word_start - str;
	*cell = ft_strnew(word_size + 1);
	if (!*cell)
		return (NULL);
	ft_strncpy(*cell, str + word_start, word_size);
	return ((char*)(str + word_start + word_size));
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	word_size;
	size_t	word_nb;
	char	**ptr;
	char	*str;

	str = (char*)s;
	word_nb = 0;
	word_size = ft_word_count(s, c);
	ptr = ft_memalloc(word_size + 1);
	if (!ptr)
		return (NULL);
	while (word_nb < word_size)
	{
		str = ft_word_split(ptr + word_nb, str, c);
		if (!str)
			return (NULL);
		word_nb++;
	}
	ptr[word_size + 1] = NULL;
	return (ptr);
}
