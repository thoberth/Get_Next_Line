/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:00:15 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/29 18:30:56 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
int		ft_test_if_n(char *str);
int		ft_strlen(char *str);
char	*ft_strdup(char *s1, int a);
char	*ft_strjoin(char *s1, char *s2, int a);
int		ft_1test(int fd, char **line, char **tmp);
int		ft_2test(char **line, char **tmp, int fd);
void	ft_free_str(char *str);
#endif
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif
