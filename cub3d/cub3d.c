/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 11:54:36 by sel-fadi          #+#    #+#             */
/*   Updated: 2019/12/18 11:54:38 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "cub3d.h"
#include <stdlib.h>
#include <stdio.h>

char map[10][16] = {
	{'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','1','1','0','1','1','0','1','1','0','1','1','0','1'},
	{'1','0','0','1','0','0','1','0','0','1','0','0','1','0','1'},
	{'1','0','0','1','N','1','1','0','1','1','0','1','1','0','1'},
	{'1','0','0','1','0','0','1','0','0','1','0','0','1','0','1'},
	{'1','0','0','1','0','1','1','0','1','1','0','0','1','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'}
	};

// char map1[10][25] = {
// 	{'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
// 	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
// 	{'1','0','1','1','0','1','1','1','1','1','0','1','0','1','0','1','1','1','0','0','0','1','0','1'},
// 	{'1','0','1','0','0','1','0','1','0','1','0','1','0','1','0','1','0','1','0','0','0','1','0','1'},
// 	{'1','0','1','1','0','1','0','1','1','1','0','1','0','1','0','1','1','1','0','1','1','1','0','1'},
// 	{'1','0','0','1','0','1','0','0','0','1','0','1','0','1','0','1','0','1','0','1','0','1','0','1'},
// 	{'1','0','1','1','0','1','1','1','1','1','0','1','1','1','0','1','0','1','0','1','1','1','0','1'},
// 	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
// 	{'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'}
// 	};

// int             close(int keycode, t_vars *vars)
// {
//     mlx_destroy_window(vars->mlx, vars->mlx_win);
// 	return (0);
// }

void            my_mlx_pixel_put(void *img, int x, int y, int color)
{
	int *addr;
	int bpp;
	int b;

	addr = (int *)mlx_get_data_addr(img, &b, &bpp, &b);
	if (x < 1920 && y < 1080)
		addr[(y * 1920 + x)] = color;
}

void    print(t_data *img, void *mlx)
{
	int x = img->x;
	int y = img->y;
	printf("%d %d\n",img->x, img->y);
	while (x <= img->x + 100)
	{
		while(y <=img->y + 100)
		{
			my_mlx_pixel_put(img->img, x, y, 16711680);
			y += 1;
		}
		y = img->y;
		x++;
	}
}

void    check_player(t_data *img, void *mlx)
{
	// img->xp = img->x;
	// img->yp = img->y;
	printf("%d %d\n",img->x, img->y);
	my_mlx_pixel_put(img->img, img->xp, img->yp, 16776960);
}

void    initialisation_struct(t_data *img)
{
	img->img = 0;
    img->addr = 0;
    img->bits_per_pixel = 0;
    img->line_length = 0;
    img->endian = 0;
    img->x = 0;
	img->y = 0;
    img->xp = 0;
    img->yp = 0;
    img->mlx = 0;
	img->mlx_win = 0;
}

int check_map(t_data *img)
{

	int h;
	int w;
	int i;

	i = 0;
	h = 0;
	w = 0;
	img->x = 0;
	img->y = 0;
	int j = 0;
	img->img = mlx_new_image(img->mlx, 1920, 1080);
	while (h <= 9)
	{
		if (map[h][w] == 'N')
		{
			img->x += 50;
			img->y += 50;
			check_player(img,img->mlx);
			img->x += 50;
			img->y -= 50;
			w++;
		}
		else if (map[h][w] == '1')
		{
			print(img, img->mlx);
			img->x += 100;
			w++;
		}
		else if (map[h][w] == '0')
		{
			img->x += 100;
			w++;
		}
		if (map[h][w] == '\0')
		{
			h++;
			w = 0;
			img->y += 100;
			img->x = 0;
		}
	}
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, 0, 0);
	mlx_destroy_image(img->mlx, img->img);
	return (0);
}
int deal_key(int key, t_data *img)
{
	if (key == 126)
	{
		// mlx_destroy_image(img->mlx, img->img);
		// mlx_clear_window(img->mlx, img->mlx_win);
		// img->img = mlx_new_image(img->mlx, 1920, 1080);
		img->yp -= 10; 
		// my_mlx_pixel_put(img->img, img->xp + 10, img->yp +10, 16776960);
		// check_map(img);
		// mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, 0, 0);
	}
	if (key == 125)
	{
		// mlx_destroy_image(img->mlx, img->img);
		// mlx_clear_window(img->mlx, img->mlx_win);
		// img->img = mlx_new_image(img->mlx, 1920, 1080);
		img->yp += 10; 
		// my_mlx_pixel_put(img->img, img->xp + 10, img->yp +10, 16776960);
		// check_map(img);
		// mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, 0, 0);
	}
	if (key == 124)
	{
		// mlx_destroy_image(img->mlx, img->img);
		// mlx_clear_window(img->mlx, img->mlx_win);
		// img->img = mlx_new_image(img->mlx, 1920, 1080);
		img->xp += 10; 
		// my_mlx_pixel_put(img->img, img->xp + 10, img->yp +10, 16776960);
		// check_map(img);
		// mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, 0, 0);
	}
	if (key == 123)
	{
		// mlx_destroy_image(img->mlx, img->img);
		// mlx_clear_window(img->mlx, img->mlx_win);
		// img->img = mlx_new_image(img->mlx, 1920, 1080);
		img->xp -= 10; 
		// my_mlx_pixel_put(img->img, img->xp + 10, img->yp +10, 16776960);
		// check_map(img);
		// mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, 0, 0);
	}
	return 0;
}

int     main(void)
{
	t_data	*img;

	img = malloc(sizeof(t_data));
	initialisation_struct(img);
	img->mlx = mlx_init();
	img->mlx_win = mlx_new_window(img->mlx, 1920, 1080, "Hello world!");
	img->xp = 200;
	img->yp = 200;
	// img->img = mlx_new_image(img->mlx, 1920, 1080);
	mlx_loop_hook(img->mlx,check_map,img);
	// check_map(img);
	// mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, 0, 0);
	mlx_key_hook(img->mlx_win, deal_key, img);
	// check_map(img);
	mlx_loop(img->mlx);
}
