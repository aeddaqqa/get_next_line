/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:14:57 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/05/13 15:44:13 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	help(char **str, char **p, int fd)
{
	int		i;
	char	*tmp2;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i])
		i++;
	*p = ft_strsub(str[fd], 0, i);
	if (!str[fd][i])
		tmp2 = ft_strdup(str[fd] + i);
	else
		tmp2 = ft_strdup(str[fd] + i + 1);
	free(str[fd]);
	str[fd] = tmp2;
}

int		get_next_line(const int fd, char **line)
{
	int			ret;
	char		buff[BUFF_SIZE + 1];
	static char	*save[MX_FD];
	char		*tmp;

	if (fd < 0 || fd > MX_FD || !line || BUFF_SIZE < 0)
		return (-1);
	if (!save[fd])
		save[fd] = ft_strnew(0);
	while ((!(ft_strchr(save[fd], '\n'))) &&
			((ret = read(fd, buff, BUFF_SIZE)) > 0))
	{
		buff[ret] = '\0';
		tmp = ft_strjoin(save[fd], buff);
		free(save[fd]);
		save[fd] = tmp;
	}
	if (ret < 1 && !*save[fd])
		return (ret);
	help(save, line, fd);
	return (1);
}
