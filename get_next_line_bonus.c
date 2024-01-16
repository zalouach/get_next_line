/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 01:30:12 by zalouach          #+#    #+#             */
/*   Updated: 2024/01/16 10:52:08 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strdup_bonus(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc((ft_strlen_bonus(str) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

size_t	ft_strlen_bonus(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*get_next_line(int fd)
{
	static char	*str[OPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (NULL);
	str[fd] = ft_read_bonus(fd, str[fd]);
	if (!str[fd])
		return (NULL);
	line = ft_getline_bonus(str[fd]);
	if (!line || *line == '\0')
	{
		free(str[fd]);
		str[fd] = NULL;
		return (free(line), NULL);
	}
	str[fd] = ft_therestline_bonus(str[fd]);
	return (line);
}
