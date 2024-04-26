/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmei <rmei@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:45:52 by rmei              #+#    #+#             */
/*   Updated: 2024/04/26 12:22:09 by rmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

extern int		ft_atoi(const char *nptr);
extern int		ft_isalpha(int c);
extern int		ft_isdigit(int c);
extern int		ft_isalnum(int c);
extern int		ft_isascii(int c);
extern int		ft_isprint(int c);
extern int		ft_isupper(int c);
extern int		ft_islower(int c);
extern int		ft_toupper(int c);
extern int		ft_tolower(int c);
extern int		ft_strncmp(const char *s1, const char *s2, size_t n);
extern int		ft_memcmp(const void *s1, const void *s2, size_t n);
extern char		*ft_strchr(const char *s, int c);
extern char		*ft_strdup(const char *s);
extern char		*ft_strnstr(const char *big, const char *little, size_t len);
extern char		*ft_strrchr(const char *s, int c);
extern void		*ft_memchr(const void *s, int c, size_t n);
extern void		*ft_memcpy(void *dest, const void *src, size_t n);
extern void		*ft_memmove(void *dest, const void *src, size_t n);
extern void		*ft_memset(void *s, int c, size_t n);
extern void		ft_bzero(void *s, size_t n);
extern size_t	ft_strlcat(char *dst, const char *src, size_t size);
extern size_t	ft_strlcpy(char *dst, const char *src, size_t size);
extern size_t	ft_strlen(const char *s);

#endif
