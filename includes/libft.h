/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 20:58:23 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/09 15:38:11 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

/*
**
** Mandatory functions
**
*/

/*
**
** Mathmaticals of doom
**
*/
int					ft_atoi(const char *str);

/*
**
** String functions
**
*/
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strstr(const char *big, const char *little);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/*
**
** Money-printing functions
**
*/
void				ft_putchar(char c);
void				ft_putstr(char const *str);
void				ft_putnbr(int nbr);

/*
**
** Bonus functions
**
*/

/*
**
** Personal functions
**
*/
int				is_whitespace(const char c);

#endif
