/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_flaw_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 18:24:58 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/13 22:24:54 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int				main(int argc, char **argv)
{
	char s1[] = "this is a nice string.";
	char s2[] = "the cake is a lie !\0I'm hidden lol\r\n";
	//char s2[] = "thx to ntoniolo for this test !";
	char s3[] = { 'n', 'o', 't', ' ', 'n', 'u', 'l', 'l', '-', 't', 'e', 'r', 'm', 'e', 'd' };
	char b1[0xF0];
	char b2[0xFF];
	char s5[4] = "";
	char s6[4] = "";
	char s4[] = "there is no stars in the sky";
	strcat(b1, s4);
	strcat(b2, s4);
	//size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	//size_t w =strlcat(b1, s2, 4);
	size_t w =strlcat(b1, s2, ft_strlen(s2) + ft_strlen(s4));
	//size_t buf = ft_strlcat(b2, s2, 4);
	size_t buf = ft_strlcat(b2, s2, ft_strlen(s2) + ft_strlen(s4));
	printf("%zu\n%zu\n", w, buf);
	printf("B1: %s\n", b1);
	printf("B2: %s\n", b2);
	ft_putstr("\nWB1: ");
	write(1, b1, w);
	ft_putstr("\nWB2: ");
	//printf("%s\n", b2);
	write(1, b2, buf);
}

