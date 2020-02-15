/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:56:45 by sel-fadi          #+#    #+#             */
/*   Updated: 2020/02/06 14:56:56 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "get_next_line.h"

void	map_fil_help(int *i, char **line)
{
	if ((*line[0] == '1' || *line[0] == '0'))
	{
		g_map[*i] = ft_strdup1(*line);
		*i += 1;
	}
	else if ((*line[0] == '\0' || *line[0] != '1' || *line[0] != '0') && *i > 0)
	{
		free(*line);
		perror("Error\n(invalid map)");
		exit(0);
	}
	free(*line);
}

void	map_fil(int i, t_cor *mlx)
{
	int		fd;
	char	*line;

	g_map = malloc(sizeof(char *) * (i + 2));
	i = 0;
	fd = open("map.cub", O_RDONLY);
	while (get_next_line(fd, &line))
		map_fil_help(&i, &line);
	if ((line[0] == '1' || line[0] == '0'))
	{
		g_map[i] = ft_strdup1(line);
		g_map[i + 1] = ft_strdup1("\0");
	}
	else
	{
		g_map[i] = ft_strdup1("\0");
		i--;
	}
	free(line);
	map_check(i, mlx);
}

void	file_cube_help(int *i, int *j, char **line)
{
	if ((*line[0] == '1' || *line[0] == '0'))
		*i += 1;
	else
	{
		file_check(*line);
		if (*line[0] != '\0')
			*j += 1;
	}
	free(*line);
}

void	file_cub(t_cor *mlx, char *argv)
{
	int		fd;
	int		i;
	char	*line;
	int		j;

	j = 0;
	i = 0;
	fd = open(argv, O_RDONLY);
	while (get_next_line(fd, &line))
		file_cube_help(&i, &j, &line);
	free(line);
	line = NULL;
	if (j < 8)
	{
		perror("Error\n(Missing param)");
		exit(0);
	}
	map_fil(i, mlx);
	mlx->map_col = i;
}
