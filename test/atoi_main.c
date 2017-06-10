/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 15:46:15 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/09 18:18:01 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int				main(int argc, char **argv)
{
	printf("FT:%d", ft_atoi(" 2147483647"));
	printf("\nC:%d\n", atoi("2147483647"));
	printf("FT:%d\n", ft_atoi("\e06050"));
	printf("C:%d\n", atoi("\e06050"));
}

