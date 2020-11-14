/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libasm.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 14:23:38 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/11/14 23:46:04 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

# define CYAN "\033[38;5;81m"
# define GREEN "\033[38;5;10m"
# define RED "\033[38;5;160m"
# define BLUE "\033[38;5;21m"
# define PURPLE "\033[38;5;99m"
# define ORANGE "\033[38;5;172m"
# define PINK "\033[38;5;13m"
# define RESET "\033[0m"
# define PATH_MAX 4096

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t	ft_read(int fildes, void *buf, size_t nbyte);
char	*ft_strdup(const char *s1);

#endif
