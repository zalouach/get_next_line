/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalouach <zalouach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 01:30:49 by zalouach          #+#    #+#             */
/*   Updated: 2024/01/16 10:51:59 by zalouach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin_bonus(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*dst;

	if (!s1 && !s2)
		return (NULL);
	if (!s1 || !s2)
	{
		if (!s1)
			return (ft_strdup_bonus(s2));
		if (!s2)
			return (ft_strdup_bonus(s1));
	}
	dst = malloc((ft_strlen_bonus(s1) + ft_strlen_bonus(s2) + 1));
	if (!dst)
		return (NULL);
	i = -1;
	while (s1[++i])
		dst[i] = s1[i];
	j = -1;
	while (s2[++j] != '\0')
		dst[i++] = s2[j];
	dst[i] = '\0';
	return (dst);
}

char	ft_strchr_bonus(char *s, char c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_read_bonus(int fd, char *str)
{
	int		charread;
	char	bufer[BUFFER_SIZE + 1];
	char	*tmp;

	charread = 1;
	while (!ft_strchr_bonus(str, '\n') && charread != 0)
	{
		charread = read(fd, bufer, BUFFER_SIZE);
		if (charread == -1)
		{
			free (str);
			return (NULL);
		}
		bufer[charread] = '\0';
		tmp = str;
		str = ft_strjoin_bonus(str, bufer);
		if (!str)
			return (free(tmp), NULL);
		free(tmp);
	}
	return (str);
}

char	*ft_getline_bonus(char *str)
{
	int		i;
	char	*p;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	p = malloc((1 + i) * sizeof(char));
	if (!p)
		return (NULL);
	p[i] = '\0';
	if (i > 0)
		i--;
	while (i >= 0)
	{
		p[i] = str[i];
		i--;
	}
	return (p);
}

char	*ft_therestline_bonus(char *str)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
		return (free (str), NULL);
	i++;
	s = malloc(ft_strlen_bonus(str) - i + 1);
	if (!s)
		return (free(str), NULL);
	while (str[i])
		s[j++] = str[i++];
	s[j] = '\0';
	return (free (str), s);
}
