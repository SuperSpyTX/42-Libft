/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expandwrite.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 13:28:05 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/22 15:26:35 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_expandwrite(void *new, int newlen, void *src, int *srcsize)
{
	int				length;
	int				newlength;
	int				i;
	char			*newbuf;

	length = newlen;
	newlength = *srcsize + length;
	newbuf = (char*)ft_memalloc(newlength);
	i = -1;
	while (++i < *srcsize)
		((char*)newbuf)[i] = ((char*)src)[i];
	i -= 1;
	while (++i < newlength)
		((char*)newbuf)[i] = ((char*)new)[i - *srcsize];
	*srcsize = newlength;
	return (newbuf);
}
