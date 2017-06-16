/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 18:32:28 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/15 21:47:58 by jkrause          ###   ########.fr       */
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
	
#endif
#if TEST_SUITE == 1
	char *ret = ft_memalloc((9223372036854775807L *2UL+1UL));
	printf("%s\n", ret);
#endif
#if TEST_SUITE == 2
	void *m = malloc(42);

	ft_memdel(&m);
	if (m == ((void *)0))
		printf("YAY\n");
#endif
#if TEST_SUITE == 3
	
#endif
#if TEST_SUITE == 4
	
#endif
#if TEST_SUITE == 5
	
#endif
#if TEST_SUITE == 6
	
#endif
#if TEST_SUITE == 7
	
#endif
#if TEST_SUITE == 8
	
#endif

}

