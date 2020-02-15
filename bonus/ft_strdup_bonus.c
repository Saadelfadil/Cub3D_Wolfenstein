/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:35:35 by sel-fadi          #+#    #+#             */
/*   Updated: 2020/02/15 18:35:36 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	char	*ft_strcpy(char *dest, const char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] != ' ')
			dest[j++] = src[i];
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char			*ft_strdup1(const char *s1)
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
