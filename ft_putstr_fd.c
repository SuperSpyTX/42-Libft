/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 03:09:36 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/12 15:50:41 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			ft_putstr_fd(char const *str, int fd)
{
	while (*str)
		ft_putchar_fd(*str++, fd);
}
