/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 16:53:27 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/15 21:40:23 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	void		*alloc;

	alloc = malloc(size);
	if (alloc)
	{
		while (size > 0)
			(((char*)alloc)[--size]) = 0;
		((char*)alloc)[0] = 0;
	}
	return (alloc ? alloc : 0);
}
