/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 03:19:13 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/09 14:09:18 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/** TODO: Figure out if I should use this or not.
**int					ft_strlen(char *src)
**{
**	int i;
**
**	i = 0;
**	while (*(src + i) != '\0')
**		i++;
**	return (i);
**}
*/

char				*ft_strdup(const char *s1)
{
	size_t		size;
	size_t		i;
	char		*newstr;

	size = ft_strlen(s1);
	newstr = (char*)malloc(size + 1);
	if (!newstr)
		return (0);
	i = -1;
	while (++i < size)
		newstr[i] = *(s1 + i);
	newstr[size] = '\0';
	return (newstr);
}
