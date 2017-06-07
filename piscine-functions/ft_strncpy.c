/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 01:18:58 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/06 21:57:59 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int c;

	c = 0;
	while (src[c] > 0 && c < (int)n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < (int)n)
	{
		dest[c] = '0';
		c++;
	}
	return (dest);
}
