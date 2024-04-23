/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mlubbers <mlubbers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 06:26:33 by mlubbers      #+#    #+#                 */
/*   Updated: 2024/01/08 14:18:28 by mlubbers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_free(char **str);
size_t	ft_len(char *str);
int		find_pos(char *temp);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_strdup(char *str1);
char	*ft_find_line(int fd, char *str);
char	*ft_next_line(char *str);
char	*ft_rem_line(char *line);
char	*get_next_line(int fd);

#endif
