/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:36:33 by sel-fadi          #+#    #+#             */
/*   Updated: 2020/02/15 18:36:34 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/types.h>

int		get_next_line(int fd, char **line);
int		check(int *p, char *buff);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t count, size_t size);
#endif
