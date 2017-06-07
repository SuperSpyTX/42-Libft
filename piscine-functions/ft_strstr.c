/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:14:28 by jkrause           #+#    #+#             */
/*   Updated: 2017/04/11 23:14:31 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strstr(char *str, char *to_find)
{
	int m_chars;
	int c;

	m_chars = 0;
	c = -1;
	while (*(str + ++c) > 0)
	{
		if (*(str + c) == *(to_find + m_chars))
		{
			if (*(to_find + m_chars + 1) == 0)
			{
				return (str + (c - m_chars));
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
