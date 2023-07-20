/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmesbahi <mmesbahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:01:53 by mmesbahi          #+#    #+#             */
/*   Updated: 2022/12/20 23:20:45 by mmesbahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 123
# endif

char	*get_next_line(int fd);
int		ft_strlen(char *s);
char	*ft_strdup(char *source);
char	*ft_strjoin(char *s1, char *s2);
int		check(char *str);
char	*first(char *str);
char	*second(char *str);
int		ft_strchr(char *s, int c);

#endif