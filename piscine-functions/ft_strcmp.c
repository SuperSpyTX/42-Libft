/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:00:57 by jkrause           #+#    #+#             */
/*   Updated: 2017/04/11 20:23:00 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_strcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 > 0 && *s2 > 0)
	{
		return (ft_strcmp(s1 + 1, s2 + 1));
	}
	return ((*s1) - (*s2));
}

int				main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char a[] = "test";
	char b[] = "test";
	printf("%s", ft_strcmp(a, b));
}

