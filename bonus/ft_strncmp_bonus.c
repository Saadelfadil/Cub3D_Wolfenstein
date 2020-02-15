/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:35:43 by sel-fadi          #+#    #+#             */
/*   Updated: 2020/02/15 18:35:44 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;
	size_t				i;

	if (!s1)
		return (1);
	if (n == 0)
		return (0);
	c1 = (unsigned char*)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (c1[i] && c2[i] && c1[i] == c2[i] && n - 1 > i)
		i++;
	return (c1[i] - c2[i]);
}
