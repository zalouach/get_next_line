/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 01:28:43 by zalouach          #+#    #+#             */
/*   Updated: 2024/01/16 10:49:14 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H 
# define GET_NEXT_LINE_BONUS_H 
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <limits.h>

char	*ft_getline_bonus(char *str);
char	*ft_therestline_bonus(char *str);
char	*ft_read_bonus(int fd, char *s);
char	*get_next_line(int fd);
char	*ft_strjoin_bonus(char *s1, char *s2);
char	ft_strchr_bonus(char *s, char c);
size_t	ft_strlen_bonus(char *str);
char	*ft_strdup_bonus(char *str);

#endif