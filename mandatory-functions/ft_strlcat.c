/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 20:08:04 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/13 22:24:19 by jkrause          ###   ########.fr       */
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
	printf("CRASH?");
	while (dst[++g] != '\0')
		o--;
	if ((g - o) <= 0)
		return (g + strlen(src));
	printf("FT_STRLCAT0: %d - %d - %d\n", o, g, (g - o));
	while (src[++k] != '\0')
		if ((g - o) > 1)
		{
			dst[g++] = src[k];
			o--;
			printf("%s - %d - %d - %d\n", dst, k, g, (g - o));
		}
		else
			printf("CS: %d - %d\n", k, (g - o));
	if ((o - g) > 0)
		dst[g] = '\0';
	printf("FT_STRLCAT: %d - %d - %d\n", k, g, (g - o));
	return (g + k);
}
