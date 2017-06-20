/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 18:46:09 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/19 19:07:33 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef TEST_SUITE
# define TEST_SUITE 0
#endif

int				main(int argc, char **argv)
{
#if TEST_SUITE == 0
	int value = 1436347470;
	char b1[0xFF];
	char *ft_ito = ft_itoa_base(value, 2);
	printf("CL: 1010101100111001110110001001110\n");
	printf("FT: %s\n", ft_ito);
#endif
#if TEST_SUITE == 1
	int value = 1436347470;
	printf("%s\n", ft_itoa_base(value, 2));
	ft_itoa_base(10000, 10);
#endif
}


