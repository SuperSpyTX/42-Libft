/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 03:19:13 by jkrause           #+#    #+#             */
/*   Updated: 2017/04/13 16:51:52 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int					ft_strlen(char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*newstr;

	size = ft_strlen(src);
	newstr = (char*)malloc(size + 1);
	if (!newstr)
		return (0);
	i = -1;
	while (++i < size)
		newstr[i] = *(src + i);
	return (newstr);
}
