# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/06 15:53:08 by sel-fadi          #+#    #+#              #
#    Updated: 2020/02/15 18:48:13 by sel-fadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./cub3D

SRC =  events.c read_file_game.c read_file_game_1.c read_file_game_2.c ft_atoi.c \
colors.c ft_cub3d.c directions.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_strnstr.c \
get_next_line.c get_next_line_utils.c ray_casting_hori.c keys.c read_map.c ray_casting.c \
wall_v_i.c utils.c ray_casting_verti.c bpm.c sprites.c

SRC_BONUS = bonus/bpm_bonus.c bonus/events_bonus.c bonus/file_conf2_bonus.c bonus/file_conf3_bonus.c \
bonus/file_conf_bonus.c bonus/ft_atoi_bonus.c bonus/ft_colors_bonus.c bonus/ft_cub3d_bonus.c bonus/ft_directions_bonus.c \
bonus/ft_memcpy_bonus.c bonus/ft_strdup_bonus.c bonus/ft_strncmp_bonus.c bonus/ft_strnstr_bonus.c bonus/get_next_line_bonus.c \
bonus/get_next_line_utils_bonus.c bonus/hor_inter_bonus.c bonus/keys_bonus.c bonus/map_read_bonus.c bonus/raycasting_bonus.c \
bonus/sp_wall_bonus.c bonus/sprites_bonus.c bonus/utils_bonus.c bonus/ver_inter_bonus.c

all: $(NAME)

$(NAME):
	gcc $(SRC) -Wall -Wextra -Werror -lmlx -framework appkit -framework opengl -o $(NAME)
bonus:
	gcc $(SRC_BONUS) -Wall -Wextra -Werror -lmlx -framework appkit -framework opengl -o $(NAME)
clean:
	rm -f ./cub3D

fclean: clean

re: fclean all

.PHONY: re clean fclean bonus