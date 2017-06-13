/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_flaw_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 18:24:58 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/12 20:27:43 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int				main(int argc, char **argv)
{
	char s1[] = "this is a nice string.";
	char s2[] = "this is a mean string.";
	char s3[] = { 'n', 'o', 't', ' ', 'n', 'u', 'l', 'l', '-', 't', 'e', 'r', 'm', 'e', 'd' };
	char b1[0xF0];
	char b2[0xFF];
	int size = 16;
	strcat(b1, s2);
	strcat(b2, s1);
	int w =strlcat(b1, s3, size+sizeof(s2)-1);
	char *buf = strncat(b2, s3, size - 1);
	printf("%d\n", w);
	printf("B1: %s\n", b1);
	printf("B2: %s\n", b2);
	ft_putstr("\nWB1: ");
	write(1, b1, w);
	ft_putstr("\nWB2: ");
	write(1, b2, ft_strlen(b2));
}

