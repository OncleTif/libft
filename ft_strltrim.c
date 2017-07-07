#include "libft.h"

char	*ft_strltrim(char *str)
{
	if (!str)
		return (NULL);
	while (*str && *str == ' ')
		str++;
	if (*str)
		return (str);
	return (NULL);
}
