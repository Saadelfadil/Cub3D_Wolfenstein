/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:36:02 by sel-fadi          #+#    #+#             */
/*   Updated: 2020/02/15 18:36:03 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	*ft_calloc(size_t count, size_t size)
{
	register void	*ptr;
	register size_t	i;
	register int	j;

	j = 0;
	i = (count * size);
	ptr = malloc(count * size);
	if (ptr)
		while (i-- > 0)
		{
			*(unsigned char *)ptr = 0;
			if (i != 0)
			{
				ptr++;
				j++;
			}
		}
	return (ptr - j);
}

char	*ft_strchr(const char *s, int c)
{
	char b;
	char *x;

	x = (char *)s;
	b = (unsigned char)c;
	if (b == '\0')
		return (x + ft_strlen(x));
	while (*x)
	{
		if (b == *x)
		{
			*x = '\0';
			return (x);
		}
		x++;
	}
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (NULL);
	return (ft_strcpy(str, s1));
}

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
