/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:00:11 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/29 18:22:33 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		ft_test_if_n(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i + 1);
		i++;
	}
	return (-i);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2, int a)
{
	int		t;
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	t = ft_strlen(s1) + a;
	if (!(res = malloc(sizeof(char) * (t + 1))))
		return (NULL);
	res[t] = '\0';
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j] && j < a)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	free(s1);
	s1 = NULL;
	return (res);
}

char	*ft_strdup(char *s1, int a)
{
	int		i;
	int		t;
	char	*dup;

	i = 0;
	t = a;
	dup = NULL;
	if (!(dup = malloc(sizeof(char) * (t + 1))))
		return (NULL);
	dup[t] = '\0';
	while (i < t)
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}
