/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 18:46:09 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/19 22:51:17 by jkrause          ###   ########.fr       */
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
	char src[] = "test basic du memccpy !";
	char buff1[22];
	char buff2[22];

	__builtin___memccpy_chk (buff1, src, 'm', 6, __builtin_object_size (buff1, 0));
	ft_memccpy(buff2, src, 'm', 6);
	printf("CL: %s\nFT: %s\n", buff1, buff2);
#endif
#if TEST_SUITE == 1
	char src[] = "test basic !";
	char buff1[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff2[] = "the cake is a lie !\0I'm hidden lol\r\n";

	__builtin___memccpy_chk (buff1, src, ' ', strlen(src), __builtin_object_size (buff1, 0));
	ft_memccpy(buff2, src, ' ', strlen(src));
	printf("CL: %s\nFT: %s\n", buff1, buff2);
#endif
#if TEST_SUITE == 2
	char src[] = "test basic du memccpy !";
	char buff1[22];

	__builtin___memset_chk (buff1, 0, sizeof(buff1), __builtin_object_size (buff1, 0));
	char *r1 = __builtin___memccpy_chk (buff1, src, 'm', 22, __builtin_object_size (buff1, 0));
	char *r2 = ft_memccpy(buff1, src, 'm', 22);
	printf("CL: %s\nFT: %s\n", r1, r2);
#endif
}


