/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 07:26:50 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/11 08:04:53 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strchr(const char *s, int c)
{
	if (*s != c && *s)
		return ft_strchr(s + 1, c);
	else if (!*s && c != 0)
		return (0);
	return ((char*)s);
}
