/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 10:12:26 by opanchen          #+#    #+#             */
/*   Updated: 2017/02/27 10:12:30 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	void		mgx(char *buff, int j)
{
	int		i;
	int		k;

	i = 0;
	k = j;
	while (buff[j] != '\0')
	{
		buff[i] = buff[j];
		j++;
		i++;
	}
	j = j - k;
	while (k != 0)
	{
		buff[j] = '\0';
		j++;
		k--;
	}
	buff[j] = '\0';
}

static	char		*get(char *line, char *a, int p)
{
	char	*b;

	b = ft_strnew(p + ft_strlen(line));
	b = ft_strcat(b, line);
	b = ft_strncat(b, a, p);
	ft_bzero(line, ft_strlen(line));
	free(line);
	line = ft_strdup(b);
	ft_bzero(b, ft_strlen(b));
	free(b);
	return (line);
}

static	int			gg(char **line, char *buff, int fd, int *a)
{
	int		p;

	while (ft_strchr(buff, '\n') == NULL)
	{
		p = ft_strlen(buff);
		if ((int)(ft_strlen(buff)) > (*a) && (*a) != 0)
			p = (*a);
		*line = get(*line, buff, p);
		ft_bzero(buff, ft_strlen(buff));
		(*a) = read(fd, buff, BUFF_SIZE);
		if ((*a) == 0)
			if (p != 0)
			{
				ft_bzero(buff, ft_strlen(buff));
				return (1);
			}
		if ((*a) <= 0)
		{
			ft_bzero(buff, ft_strlen(buff));
			return (0);
		}
	}
	return (1);
}

static	int			jj(char **line, char *buff, int *k)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strchr(buff, '\n') != NULL)
	{
		j = ft_strlen(buff) - ft_strlen(ft_strchr(buff, '\n'));
		if (buff[0] == '\n')
			(*k) = 1;
		while (buff[i] != '\0')
		{
			if (buff[i] == '\n')
			{
				buff[i] = '\0';
				if (!(ft_strchr(buff, '\n') == NULL))
					mgx(buff, j + 1);
				*line = get(*line, buff, i);
				if (ft_strchr(buff, '\n') == NULL)
					mgx(buff, j + 1);
				return (1);
			}
			i++;
		}
	}
	return (1);
}

int					get_next_line(int fd, char **line)
{
	static	char	buff[BUFF_SIZE + 1];
	int				a;
	int				h;
	int				k;

	h = 0;
	k = 0;
	if ((a = read(fd, buff, 0)) || !line || BUFF_SIZE < 1)
		return (-1);
	*line = ft_strnew(1);
	buff[BUFF_SIZE] = '\0';
	ft_bzero(*line, ft_strlen(*line));
	h = gg(line, buff, fd, &a);
	h = jj(line, buff, &k);
	if (*line[0] == '\0')
		h = 0;
	if (k == 1)
		h = 1;
	return (h);
}
