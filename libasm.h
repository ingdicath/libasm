/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libasm.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 14:23:38 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/09/16 14:27:38 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

// #define KNRM  "\x1B[0m"
// #define KRED  "\033[31m"
// #define KGRN  "\x1B[32m"
// #define KYEL  "\x1B[33m"
// #define KBLU  "\x1B[34m"
// #define KMAG  "\x1B[35m"
// #define KCYN  "\x1B[36m"
// #define KWHT  "\x1B[37m"

#include <string.h>
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char * dst, const char * src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t	ft_read(int fildes, void *buf, size_t nbyte);
char	*ft_strdup(const char *s1);
void	hola(char *str);

#endif
