#include "libft.h"

char	*ft_strltrim(char *str)
{
	if (!str)
		return (NULL);
	while (*str && *str == ' ')
		str++;
	return (str);
}
