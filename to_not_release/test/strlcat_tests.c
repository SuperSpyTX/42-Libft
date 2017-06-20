/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:04:21 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/13 21:06:36 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int				main(int argc, char **argv)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t r1 = __builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
	size_t r2 = ft_strlcat(buff2, str, max);
	printf("%zu\n%zu\n", r1, r2);

	char s1[4] = "";
	char s2[4] = "";
	r1 = __builtin___strlcat_chk (s1, "thx to ntoniolo for this test !", 4, __builtin_object_size (s1, 2 > 1 ? 1 : 0));
	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	printf("%zu\n%zu", r1, r2);
}

