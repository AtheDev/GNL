/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 20:13:15 by adupuy            #+#    #+#             */
/*   Updated: 2020/12/16 09:34:30 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	get_next_line(int fd, char **line)
{
	int			ret;
	char		buf[BUFFER_SIZE + 1];
	static char	*str[OPEN_MAX];
	int			count;

	if (fd < 0 || !line || BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (-1);
	ret = 1;
	while ((ret > 0) && ((count = ft_is_end_line(str[fd])) == 0))
	{
		ret = read(fd, buf, BUFFER_SIZE);
		buf[ret] = '\0';
		if (!(str[fd] = ft_strjoin(str[fd], buf)))
			return (-1);
	}
	ret = ft_new_line(&str[fd], line, ret, count);
	return (ret);
}
