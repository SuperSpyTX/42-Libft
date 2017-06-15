/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_crash.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 18:34:14 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/13 18:38:47 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <sys/mman.h>


void	*electric_alloc(size_t size)
{
	void	*ptr = mmap(NULL, 8192lu, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);

	memset(ptr, 'Z', 8192lu);
	mprotect(ptr + 4096, 4096, PROT_NONE);
	return (ptr + 4096 - size);
}

int				main(int argc, char **argv)
{
	char *str = electric_alloc(10);
	char *buff = electric_alloc(10);
	strcpy(buff, "AB");
	strcpy(str, "CDEFGHI");
	//printf("%zu\n", strlcat(buff, str, 10));
	printf("%zu\n", ft_strlcat(buff, str, 10));
}

