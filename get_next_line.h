/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:08:39 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/05/13 15:28:28 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "Libft/libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# define BUFF_SIZE 32
# define MX_FD 4864

int		get_next_line(const int fd, char **line);

#endif
