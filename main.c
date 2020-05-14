/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:25:33 by vileleu           #+#    #+#             */
/*   Updated: 2019/12/02 14:51:07 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int		main(int ac, char **av)
{
	char	*line;
	int		fd;
	int		res;

	fd = open(av[1], O_RDONLY);
	while ((res = get_next_line(fd, &line)) > 0)
	{
		printf("[%d] %s\n", res, line);
		free(line);
	}
	printf("[%d] %s\n", res, line);
	free(line);
	while (1)
	{}
	return (0);
}
