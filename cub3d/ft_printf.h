/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 12:07:36 by sel-fadi          #+#    #+#             */
/*   Updated: 2019/11/21 14:54:06 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct		s_flags
{
	int zero;
	int minus;
	int width;
	int precision;
	int pr;
}					t_flags;

int					print_s(int count, va_list vlist, t_flags *p);
int					ft_printf(const char *format, ...);
int					print_c(int count, va_list vlist, t_flags *p);
int					print_d(int count, va_list vlist, t_flags *p);
int					print_u(int count, va_list vlist, t_flags *p);
int					print_x(int count, va_list vlist, t_flags *p);
int					print_x_x(int count, va_list vlist, t_flags *p);
int					print_modulo(int count, char str, t_flags *p);
int					print_p(int count, va_list vlist, t_flags *p);
int					ft_putchar(char c);
int					ft_putchar_count(char c, int count);
int					ft_putstr(char *str);
char				ft_putstr_string(char *str);
int					ft_putstr_i_print(char *str, int len);
int					ft_strlen(char *str);
int					ft_itoa(long n);
int					ft_itoa_unsigned(unsigned int n);
int					ft_itoa_len(int n);
int					ft_itoa_len_un(unsigned int n);
int					ft_x_hexa(unsigned long nbr);
int					ft_x_xhexa(unsigned int nbr);
char				*ft_strrev(char *str);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_putstr_space(int nbr);
int					ft_putstr_zero(int nbr);
int					flags_print(const char **format,
int count, va_list vlist, t_flags *p);
int					check_conversion(const char **format,
int count, va_list vlist, t_flags *p);
t_flags				*check_flags(const char **format, va_list vlist);
int					flags_width_precision(int count, char *str, t_flags *p);
int					flags_width(int count, char *str, t_flags *p);
int					flags_precision(int count, char *str, t_flags *p);
int					flags_width_d(int count, int nbr, t_flags *p);
int					flags_precision_d(int count, long nbr, t_flags *p);
int					flags_width_precision_d(int count, long nbr, t_flags *p);
int					flags_width_zero_d(int count, long nbr, t_flags *p);
int					flags_width_p(int count, char *nbr, t_flags *p);
int					ft_x_hexa_len(unsigned long nbr);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strcpy(char *dest, char *src);
char				*ft_x_hexa_p(unsigned long nbr, t_flags *p);
char				*ft_strdup(const char *s1);
int					flags_width_p2(int count, char *nbr, t_flags *p);
int					flags_width_c(int count, int str, t_flags *p);
int					flags_width_precision_u(int count,
unsigned int nbr, t_flags *p);
int					flags_width_u(int count, unsigned int nbr, t_flags *p);
int					flags_precision_u(int count, unsigned int nbr, t_flags *p);
int					flags_width_zero_u(int count, unsigned int nbr, t_flags *p);
int					flags_width_precision_x(int count, char *nbr, t_flags *p);
int					flags_width_x(int count, char *nbr, t_flags *p);
int					flags_precision_x(int count, char *nbr, t_flags *p);
int					flags_width_zero_x(int count, char *nbr, t_flags *p);
char				*ft_x_hexa_x_string(unsigned int nbr);
int					flags_width_precision_xx(int count, char *nbr, t_flags *p);
int					flags_width_xx(int count, char *nbr, t_flags *p);
int					flags_precision_xx(int count, char *nbr, t_flags *p);
int					flags_width_zero_xx(int count, char *nbr, t_flags *p);
char				*ft_x_hexa_xx_string(unsigned int nbr);
int					flags_width_modulo(int count, char str, t_flags *p);
void				check_flags_help1(const char **format,
va_list vlist, t_flags *p, char first);
void				check_flags_help2(const char **format,
va_list vlist, t_flags *p);
int					flags_all_d_help1(int count, long nbr,
int n_nbr, t_flags *p);
int					flags_all_d_help2(int count, long nbr,
int n_nbr, t_flags *p);
int					d_negative_my(long nbr, t_flags *p);
int					d_negative_mn(long nbr, t_flags *p);
int					d_positive_my(long nbr, t_flags *p);
int					d_positive_mn(long nbr, t_flags *p);
int					ft_len(int a);
int					d_negative_my_x(char *nbr, t_flags *p);
int					d_negative_mn_x(char *nbr, t_flags *p);
int					d_positive_my_x(char *nbr, t_flags *p);
int					d_positive_mn_x(char *nbr, t_flags *p);
int					d_positive_my_u(unsigned int nbr, t_flags *p);
int					d_positive_mn_u(unsigned int nbr, t_flags *p);
int					ft_i_u(unsigned int n);
int					flags_all_s_help1(int count, char **str, t_flags *p);
int					flags_all_s_help2(int count, char **str, t_flags *p);
int					flags_all_s_help3(int count, char **str, t_flags *p);

#endif
