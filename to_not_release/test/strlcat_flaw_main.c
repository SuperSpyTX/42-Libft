/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_flaw_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 18:24:58 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/15 16:55:03 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

# define TEST_SUITE 0

int				main(int argc, char **argv)
{
	char s1[] = "this is a nice string.";
	char s2[] = "the cake is a lie !\0I'm hidden lol\r\n";
	//char s2[] = "thx to ntoniolo for this test !";
	char s3[] = { 'n', 'o', 't', ' ', 'n', 'u', 'l', 'l', '-', 't', 'e', 'r', 'm', 'e', 'd' };
	char s4[] = "there is no stars in the sky";
#if TEST_SUITE == 0
	char b1[0xF0];
	char b2[0xFF];
	strcat(b1, s4);
	strcat(b2, s4);
	size_t c =strlcat(b1, s2, ft_strlen(s2) + ft_strlen(s4));
	size_t ft = ft_strlcat(b2, s2, ft_strlen(s2) + ft_strlen(s4));
#endif
#if TEST_SUITE == 1
	char b1[0xF00] = "there is no stars in the sky";
	char b2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t c = __builtin___strlcat_chk (b1, s1, max, __builtin_object_size (b1, 2 > 1 ? 1 : 0));
	size_t ft = ft_strlcat(b2, s1, max);
#endif
#if TEST_SUITE == 2
	char b1[0xF00] = "there is no stars in the sky";
	char b2[0xF00] = "there is no stars in the sky";
	size_t max = 1000;
	size_t c = __builtin___strlcat_chk (b1, s1, max, __builtin_object_size (b1, 2 > 1 ? 1 : 0));
	size_t ft = ft_strlcat(b2, s1, max);
#endif
#if TEST_SUITE == 3
	char b1[0xF00] = "";
	char b2[0xF00] = "";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 1;
	size_t c = __builtin___strlcat_chk (b1, s1, max, __builtin_object_size (b1, 2 > 1 ? 1 : 0));
	size_t ft = ft_strlcat(b2, s1, max);
#endif

	printf("CL: %zu\nFT: %zu\n", c, ft);
	printf("CL: %s\n", b1);
	printf("FT: %s\n", b2);
	ft_putstr("\nCL: ");
	write(1, b1, c);
	ft_putstr("\nFT: ");
	//printf("%s\n", b2);
	write(1, b2, ft);
}

