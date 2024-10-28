/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:05:48 by ndorofey          #+#    #+#             */
/*   Updated: 2024/10/28 20:31:08 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stddef.h>
# include <string.h>
# include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void    *ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(char *s, int c);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int     ft_tolower(int c);
int     ft_tolower(int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     atoi(const char *nptr);

#endif