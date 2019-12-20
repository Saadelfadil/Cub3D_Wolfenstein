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

char map[8][8] = {
    {'1','1','1','1','1','1','1'},
    {'1','1','0','0','0','0','1'},
    {'1','0','0','0','1','0','1'},
    {'1','0','1','0','1','0','1'},
    {'1','0','0','1','0','0','1'},
    {'1','0','0','0','0','1','1'},
    {'1','1','1','1','1','1','1'}
    };

void            my_mlx_pixel_put(void *img, int x, int y, int color)
{
    int *addr;
    int bpp;
    int b;

    addr = (int *)mlx_get_data_addr(img, &b, &bpp, &b);
    addr[(y * 1920 + x)] = color;
}

void    print(t_data *img, void *mlx)
{
    int x = img->x;
    int y = img->y;
    printf("%d %d\n",img->x, img->y);
    while (x <= img->x+100)
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

void check_map(t_data *img, void *mlx)
{
    int h;
    int w;
    int i;

    i = 0;
    h = 0;
    w = 0;
    int j = 0;
    while (h <= 6)
    {
        if (map[h][w] == '1')
        {
            print(img,mlx);
            img->x +=100;
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
        // if (map[h] == '\0')
        //    break;
    }
}

int     main(void)
{
    void     *mlx;
    void    *mlx_win;
    t_data    *img;

    img = malloc(sizeof(t_data));
    img->x = 0;
    img->y = 0;

    mlx = mlx_init();
    mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
    img->img = mlx_new_image(mlx, 1920, 1080);
    check_map(img,mlx);
    mlx_put_image_to_window(mlx, mlx_win, img->img, 0, 0);
    mlx_loop(mlx);
}
