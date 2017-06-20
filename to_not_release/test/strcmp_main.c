/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 14:40:13 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/16 13:02:50 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#ifndef TEST_SUITE
# define TEST_SUITE 1
#endif

int				main(int argc, char **argv)
{
#if TEST_SUITE == 0
	char *s1 = "AAAAAA";
	char *s2 = "";
	int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
	int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));
#endif

#if TEST_SUITE == 1
	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	char *s2 = "\x12\x02";
	int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
	int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));
#endif
#if TEST_SUITE == 2
	char *s1 = "aaf";
	char *s2 = "a";
	int i1 = strcmp(s1, s2);
	int i2 = ft_strcmp(s1, s2);
#endif
	printf("S1:%s\nS2:%s\nCL:%d\nFT:%d\n", s1, s2, i1, i2);
}

