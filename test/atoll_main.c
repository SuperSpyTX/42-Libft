/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 15:46:15 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/16 12:29:13 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int				main(int argc, char **argv)
{
	printf("FT:%d",    ft_atoll("-99999999999999999999999999"));
	printf("\nC:%d\n", atoi("    -99999999999999999999999999"));
	printf("FT:%lld\n", ft_atoll("\e06050"));
	printf("C:%ld\n", atol("\e06050"));
}

