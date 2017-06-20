/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 16:44:19 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/19 22:25:51 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*expand_bufferwrite(char *c, char *dan, int dansize)
{
	int				length;
	int				newlength;
	int				i;
	char			*new;

	length = 1;
	newlength = dansize + length;
	new = (char*)malloc(newlength);
	i = -1;
	while (++i < dansize)
		new[i] = dan[i];
	i -= 1;
	while (++i < newlength)
		new[i] = c[i - dansize];
	new[i] = '\0';
	return (new);
}

static char			*ft_putnum(int num, int base, char *buf)
{
	char			*alpha;
	int				max;
	char			pls;

	alpha = "0123456789ABCDEF";
	pls = 0;
	max = base - 1;
	if (num < 0)
		num *= -1;
	if (num > max)
		pls = alpha[0];
	else
	{
		pls = alpha[num];
		buf = expand_bufferwrite(&pls, buf, ft_strlen(buf));
	}
	return (buf);
}

static char			*whenlifebreaksdown(int num, int base, char *buf)
{
	if (num >= base || num <= -base)
	{
		buf = whenlifebreaksdown(num / base, base, buf);
		buf = whenlifebreaksdown(num % base, base, buf);
	}
	else
		return (ft_putnum(num, base, buf));
	return (buf);
}

char				*ft_itoa_base(int value, int base)
{
	char			*ha;

	ha = ft_strnew(1);
	if (!ha)
		return (0);
	ha[0] = '-';
	ha = whenlifebreaksdown(value, base, ha);
	return (value < 0 && base == 10 ? ha : ha + 1);
}
