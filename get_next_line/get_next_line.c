/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <kho-gia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:08:40 by kho-gia           #+#    #+#             */
/*   Updated: 2023/02/21 21:40:05 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	static_buffer[1000000];
	char		line[1000000];
	int			bread;
	int			i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	i = 0;
	bread = read(fd, static_buffer, 1);
	while (bread > 0)
	{
		line[i] = static_buffer[i];
		if (static_buffer[i++] == '\n')
			break ;
		bread = read(fd, &static_buffer[i], 1);
	}
	line[i] = '\0';
	if (bread <= 0 && i == 0)
	{
		return (NULL);
	}
	return (ft_strdup(line));
}
