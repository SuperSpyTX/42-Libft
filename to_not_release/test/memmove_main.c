/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 18:46:09 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/19 23:45:27 by jkrause          ###   ########.fr       */
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
	char dst[0xFF];
	char dst2[0xFF];
	char src[] = "pierce is dong lover.";

	ft_memmove(dst, src, 5);
	memmove(dst2, src, 5);
	printf("CL: %s\nFT: %s\n", dst2, dst);
#endif
#if TEST_SUITE == 1
	char *src = "thanks to @apellicc for this test !\r\n";
	char dst1[0xF0];
	int size = strlen(src);
	char *r1 = __builtin___memmove_chk (dst1, src, size, __builtin_object_size (dst1, 0));
	char *r2 = ft_memmove(dst1, src, size);
	printf("CL: %s\nFT: %s\n", r1, r2);
#endif
#if TEST_SUITE == 2
	char *src = "thanks to @apellicc for this test !\r\n";
	char dst1[0xF0];
	int size = strlen(src);
	//char *r1 = __builtin___memmove_chk ("", "" - 1, 0, __builtin_object_size ("", 0));
	char *r2 = ft_memmove("", "" - 1, 0);
	//printf("CL: %s\nFT: %s\n", r1, r2);
#endif
}


