/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:41:06 by jkrause           #+#    #+#             */
/*   Updated: 2017/07/13 23:20:06 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnchr(const char *s, int c, size_t size)
{
	size_t					len;

	len = 0;
	while ((unsigned char)*s != (unsigned char)c && *s && len++ < size)
		(void)*s++;
	if ((!*s && c != 0) || len >= size)
		return (0);
	return ((char*)s);
}
