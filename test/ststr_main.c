/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ststr_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 18:29:16 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/09 19:06:02 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

# define TEST_SUITE 4

int				main(int argc, char **argv)
{
	/* Test 1 */
#if TEST_SUITE == 1
	char *s2 = "FF";
	char *s1 = "see F your F return FF now FF";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
#endif

#if TEST_SUITE == 2
	/* Test 2 */
	char *s1 = "aaabbbaaabbb";
	char *s2 = "abbaaab";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
#endif
#if TEST_SUITE == 3
	/* Test 3 */
	char *s1 = "oh no not the empty string !";
	char *s2 = "";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
#endif
#if TEST_SUITE == 4
	char *s1 = "MZIRIBMZIRIBMZP";
	char *s2 = "MZIRIBMZP";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
#endif
#if TEST_SUITE == 5
	char *s1 = "";
	char *s2 = "";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
#endif
#if TEST_SUITE == 6
	char *s1 = "AAAAAAAAAAAAA";
	char *s2 = s1;
	char *i1 = strstr(s1, s1);
	char *i2 = ft_strstr(s1, s1);
#endif
#if TEST_SUITE == 0
	char *s1 = "tes\test 2 e f g ";
	char *s2 = "test";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
#endif

	printf("S1:%s\nS2:%s\nC:%s\nFT:%s\n", s1, s2, i1, i2);
}

