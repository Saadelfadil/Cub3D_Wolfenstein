/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:59:29 by sel-fadi          #+#    #+#             */
/*   Updated: 2020/02/06 14:59:31 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = n;
	if (n == 0 || (dst == NULL && src == NULL))
		return (dst);
	while (n > 0)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst++;
		src++;
		n--;
	}
	return (dst - i);
}