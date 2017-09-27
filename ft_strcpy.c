/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 01:18:58 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/18 14:18:00 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strcpy(char *dst, const char *src)
{
	size_t c;

	c = 0;
	while (src[c] != 0)
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = '\0';
	return (dst);
}
