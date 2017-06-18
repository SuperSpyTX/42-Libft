/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 18:46:09 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/17 15:03:57 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#ifndef TEST_SUITE
# define TEST_SUITE 0
#endif

int 

int				main(int argc, char **argv)
{
#if TEST_SUITE == 0
	char **test = malloc(sizeof(char *) * 4);
	test[0] = "hai";
	test[1] = "thar";
	printf("%lu\n", sizeof(char *));
	printf("%s\n", test[1]);
#endif
}


