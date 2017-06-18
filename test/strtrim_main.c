/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 18:46:09 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/16 16:40:58 by jkrause          ###   ########.fr       */
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
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";

	char *ret = ft_strtrim(s1);

	printf("%s\n", ret);
#endif
#if TEST_SUITE == 1
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1);
	printf("%s--END\n", ret);
#endif
#if TEST_SUITE == 2

#endif
}


