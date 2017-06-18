/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 18:46:09 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/17 12:28:24 by jkrause          ###   ########.fr       */
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
	char *str = "i just want this part #############";
	size_t size = 20;
	char *ret = ft_strsub(str, 5, size);
	printf("%s\n%s\n", ret, str + 5);
#endif
#if TEST_SUITE == 1
	char str[] = "i just want this part #############";
	size_t size = 20;

	char *ret = ft_strsub(str, 5, size);
	str[size + 5] = 0;
	printf("%s\n%s\n", ret, str + 5);
#endif
#if TEST_SUITE == 2
	char str[] = "skipmyay the string is here.";
	char *ret = ft_strsub(str, 5, ft_strlen(str));
	printf("%s\n%s\n", ret, str + 5);
#endif
}


