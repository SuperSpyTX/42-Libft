/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 16:47:31 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/17 14:14:04 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			count_chars(char const *s, char c)
{
	int				i;

	while (*s != '\0')
		if (*s == c)
			i++;
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**buffer;
	int				buffersize;
	int				i;

	buffersize = count_chars(s, c);
	buffer = ft_memalloc(buffersize);

	while (i < buffersize)
	{
		
	}
}
