/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeekim <jeekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 21:20:20 by jeekim            #+#    #+#             */
/*   Updated: 2022/01/05 17:30:25 by jeekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define  GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

char	*for_next(char *save);
size_t	ft_strlen(char *s);
char	*ft_strcpy(char *dest, char *src);
char	*rtg(char *save);
char	*read_and_save(int fd, char *save);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
