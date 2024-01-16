/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 05:44:18 by zalouach          #+#    #+#             */
/*   Updated: 2024/01/16 10:49:23 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

char	*ft_getline(char *str);
char	*ft_therestline(char *str);
char	*ft_read(int fd, char *s);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	ft_strchr(char *s, char c);
size_t	ft_strlen(char *str);
char	*ft_strdup(char *str);

#endif