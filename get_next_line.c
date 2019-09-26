/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:37:42 by apalaz            #+#    #+#             */
/*   Updated: 2018/12/14 15:56:04 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_check_error(int fd, char **line)
{
	if (fd < 0 || fd >= OPEN_MAX || !line)
		return (1);
	return (0);
}

static int		ft_check_mem_buff(char **line, char *mem_buff)
{
	size_t		i;
	char		*temp;

	i = 0;
	while (mem_buff[i] && mem_buff[i] != '\n')
		i++;
	if (mem_buff[i] == '\n')
	{
		if (!(*line = ft_strsub(mem_buff, 0, i)))
			return (-1);
		i++;
		if (i < ft_strlen(mem_buff))
		{
			temp = (mem_buff + i);
			ft_strcpy(mem_buff, temp);
		}
		else
			ft_bzero(mem_buff, BUFF_SIZE);
		return (1);
	}
	if (!(*line = ft_strsub(mem_buff, 0, i)))
		return (-1);
	ft_bzero(mem_buff, BUFF_SIZE);
	return (0);
}

static int		check_buff(char *buff, char **line, char *mem_buff)
{
	int			i;
	char		*temp;

	i = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	if (buff[i] == '\n')
	{
		if (!(temp = ft_strsub(buff, 0, i)))
			return (-1);
		if (!(*line = ft_strjoin_free(*line, temp, 1, 1)))
		{
			ft_strdel(&temp);
			return (-1);
		}
		ft_strcpy(mem_buff, (buff += i + 1));
		return (1);
	}
	if (!(*line = ft_strjoin_free(*line, buff, 1, 0)))
		return (-1);
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	int			ret;
	char		buff[BUFF_SIZE + 1];
	static char	mem_buff[OPEN_MAX][BUFF_SIZE];
	int			temp;

	if (ft_check_error(fd, line))
		return (-1);
	if ((temp = ft_check_mem_buff(line, mem_buff[fd])) > 0)
		return (1);
	ret = (temp == -1) ? -1 : 1;
	while (ret != -1 && (ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if ((ret = check_buff(buff, line, mem_buff[fd])) > 0)
			return (1);
	}
	if (ret < 0)
	{
		ft_strdel(line);
		return (-1);
	}
	if (ret == 0 && **line)
		return (1);
	return (0);
}
