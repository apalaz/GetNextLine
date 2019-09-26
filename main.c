/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 17:42:49 by apalaz            #+#    #+#             */
/*   Updated: 2019/02/20 17:53:28 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd;
	char *line;
	int ret;
	ret = 1;

	fd = open("42", O_RDONLY);
	while ((ret = get_next_line(fd, &line)))
	{
		ft_putendl(line);
		free(line);
		printf("ret = %d\n", ret);
	}
	printf("ret = %d\n", ret);
}
