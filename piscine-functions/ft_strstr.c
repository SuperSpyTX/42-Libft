/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:14:28 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/08 16:45:39 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char				*ft_strstr(const char *big, const char *little)
{
	int m_chars;
	int c;

	m_chars = 0;
	c = -1;
	while (*(big + ++c) > 0)
	{
		if (*(big + c) == *(little + m_chars))
		{
			if (*(little + m_chars + 1) == 0)
			{
				return ((char *)big + (c - m_chars));
			}
			m_chars++;
		}
		else
		{
			m_chars = 0;
		}
	}
	return (0);
}
