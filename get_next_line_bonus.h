/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:00:44 by adupuy            #+#    #+#             */
/*   Updated: 2020/12/16 11:36:02 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		get_next_line(int fd, char **line);
char	*ft_substr(char *s, int start, int len);
int		ft_strlen(char *str);
int		ft_is_end_line(char *str);
int		ft_new_line(char **str, char **line, int ret, int count);
char	*ft_strjoin(char *s1, char *s2);

#endif
