/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_directions_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:34:39 by sel-fadi          #+#    #+#             */
/*   Updated: 2020/02/15 18:34:40 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "get_next_line.h"

void	north(char **line)
{
	*line += 3;
	rm_sp(line);
	g_npath = ft_strdup1(*line);
}

void	south(char **line)
{
	*line += 3;
	rm_sp(line);
	g_spath = ft_strdup1(*line);
}

void	weast(char **line)
{
	*line += 3;
	rm_sp(line);
	g_wepath = ft_strdup1(*line);
}

void	east(char **line)
{
	*line += 3;
	rm_sp(line);
	g_eapath = ft_strdup1(*line);
}

void	sprite_path(char **line)
{
	*line += 2;
	rm_sp(line);
	g_sprit = ft_strdup1(*line);
}
