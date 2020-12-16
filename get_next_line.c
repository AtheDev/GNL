/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:59:47 by adupuy            #+#    #+#             */
/*   Updated: 2020/12/16 13:31:54 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	int			ret;
	char		buf[BUFFER_SIZE + 1];
	static char	*str;
	int			count;

	if (fd < 0 || !line || BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (-1);
	ret = 1;
	while ((ret > 0) && ((count = ft_is_end_line(str)) == 0))
	{
		ret = read(fd, buf, BUFFER_SIZE);
		buf[ret] = '\0';
		if (!(str = ft_strjoin(str, buf)))
			return (-1);
	}
	ret = ft_new_line(&str, line, ret, count);
	return (ret);
}
