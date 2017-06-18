/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striter_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 13:36:32 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/16 13:55:52 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#ifndef TEST_SUITE
# define TEST_SUITE 0
#endif

void			testfunc(unsigned i, char *c)
{
	printf("%c", *c);
	*c = i + '0';
}

int				main(int argc, char **argv)
{
#if TEST_SUITE == 0
	char s1[] = "abcdef";
	ft_striteri(s1, testfunc);
	printf("%s", s1);
#endif
}


