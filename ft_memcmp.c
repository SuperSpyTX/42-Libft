/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:00:57 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/20 00:31:51 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char			*m1;
	unsigned char			*m2;

	m1 = (unsigned char*)s1;
	m2 = (unsigned char*)s2;
	if (*m1 == *m2 && n > 1)
		return (ft_memcmp(m1 + 1, m2 + 1, n - 1));
	return ((unsigned char)(*m1) - (unsigned char)(*m2));
}
