/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 20:08:04 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/15 16:53:03 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	int				g;
	int				k;
	int				o;

	g = -1;
	k = -1;
	o = (int)size;
	while (dst[++g] != '\0')
	{
		if ((o - g) == 0)
			return (g + ft_strlen(src));
	}
	while (src[++k] != '\0')
		if ((o - g) > 1)
			dst[g++] = src[k];
		else
			g++;
	if ((o - k) > 0)
		dst[g] = '\0';
	return (g);
}
