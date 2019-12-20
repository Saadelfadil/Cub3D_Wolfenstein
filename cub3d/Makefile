# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/09 13:04:20 by sel-fadi          #+#    #+#              #
#    Updated: 2019/11/21 14:49:18 by sel-fadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

SRCS=ft_printf.c print_s.c print_c.c ft_putchar.c ft_putstr.c ft_strlen.c print_d.c ft_itoa.c ft_atoi.c ft_putstr_string.c \
print_u.c ft_itoa_unsigned.c print_x.c ft_x_hexa.c ft_strrev.c ft_x_xhexa.c print_p.c print_x_x.c ft_itoa_len.c \
ft_isalpha.c ft_isdigit.c  ft_putstr_space.c flags.c ft_putstr_i_print.c flags_all_s.c flags_all_d.c ft_putstr_zero.c \
flags_all_p.c ft_x_hexa_len.c ft_strjoin.c ft_strcpy.c ft_x_hexa_p.c ft_strdup.c flags_all_c.c flags_all_u.c \
ft_x_hexa_x_string.c ft_x_hexa_xx_string.c flags_all_x.c flags_all_xx.c flags_all_modulo.c print_modulo.c ft_putchar_count.c \
ft_itoa_len_un.c ft_printf_help.c d_nega_posi.c ft_len.c flags_all_d_help.c d_nega_posi_x.c d_nega_posi_u.c ft_i_u.c \
flags_all_s_help.c

OBJS=ft_printf.o print_s.o print_c.o ft_putchar.o ft_putstr.o ft_strlen.o print_d.o ft_itoa.o ft_atoi.o ft_putstr_string.o \
print_u.o ft_itoa_unsigned.o print_x.o ft_x_hexa.o ft_strrev.o ft_x_xhexa.o print_p.o print_x_x.o ft_itoa_len.o \
ft_isalpha.o ft_isdigit.o ft_putstr_space.o flags.o ft_putstr_i_print.o flags_all_s.o flags_all_d.o ft_putstr_zero.o \
flags_all_p.o ft_x_hexa_len.o ft_strjoin.o ft_strcpy.o ft_x_hexa_p.o ft_strdup.o flags_all_c.o flags_all_u.o \
ft_x_hexa_x_string.o ft_x_hexa_xx_string.o flags_all_x.o flags_all_xx.o flags_all_modulo.o print_modulo.o ft_putchar_count.o \
ft_itoa_len_un.o ft_printf_help.o d_nega_posi.o ft_len.o flags_all_d_help.o d_nega_posi_x.o d_nega_posi_u.o ft_i_u.o \
flags_all_s_help.o

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRCS)
		ar -rc $(NAME) $(OBJS)
		ranlib $(NAME)

bonus:
		gcc -Wall -Wextra -Werror -c $(BSRCS)
		ar -rs $(NAME) $(BOBJS)
		ranlib $(NAME)

clean:
		rm -rf $(OBJS) $(BOBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all
