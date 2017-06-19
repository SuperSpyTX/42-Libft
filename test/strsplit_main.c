/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 18:46:09 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/19 03:24:49 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#ifndef TEST_SUITE
# define TEST_SUITE 0
#endif

int				main(int argc, char **argv)
{
#if TEST_SUITE == 0
	char **test = malloc(sizeof(char *) * 4);
	test[0] = "hai";
	test[1] = "thar";
	printf("%lu\n", sizeof(char *));
	printf("%s\n", test[1]);
#endif
#if TEST_SUITE == 1
	char *pls = "cngo__will______________never_get_his_matchnmatch_points";
	char spl = '_';
	char **buf = ft_strsplit(pls, spl);
	int i = 0;
	//while (*buf)
		//printf("%s\n", *buf++);
#endif
#if TEST_SUITE == 2
	char *s = "      split       this for   me  !       ";
	char **r = ft_strsplit(s, ' ');
	printf("%s\n", r[0]);
	printf("%s\n", r[1]);
#endif
#if TEST_SUITE == 3
	char *s = "      split       this for   me  !       ";
	char **r = ft_strsplit(s, ' ');
	if (!r)
		printf("YAY?");
#endif
#if TEST_SUITE == 4
	static char	**tt;
	tt = ft_strsplit("***salut****!**", '*');
	printf("%s\n", tt[0]);
	printf("%s\n", tt[1]);
#endif
#if TEST_SUITE == 5
	static char	**tt;
	tt = ft_strsplit("*****", '*');
	printf("%s\n", tt[0]);
#endif
#if TEST_SUITE == 6
	static char	**tt;
	tt = ft_strsplit("coucou", '*');
	printf("%s\n", tt[0]);
	printf("%s\n", tt[1]);
#endif
#if TEST_SUITE == 7
	static char	**tt;
	tt = ft_strsplit("salut****", '*');
	printf("%s\n", tt[0]);
	printf("%s\n", tt[1]);
#endif
#if TEST_SUITE == 8
	static char	**tt;
	tt = ft_strsplit("****salut", '*');
	printf("%s\n", tt[0]);
	printf("%s\n", tt[1]);
#endif
#if TEST_SUITE == 9
	static char	**tt;
	tt = ft_strsplit("", '*');
	printf("%s\n", tt[0]);
#endif

}
