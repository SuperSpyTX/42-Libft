/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 11:22:00 by jkrause           #+#    #+#             */
/*   Updated: 2017/04/11 23:39:23 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_trim_space(char *str)
{
	int i;

	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
	{
		i++;
	}
	return (i);
}

int				ft_atoi(char *str)
{
	int		res;
	int		len;
	int		neg;

	len = ft_trim_space(str);
	res = 0;
	if (*(str + len) == '-')
	{
		neg = 1;
	}
	if (*(str + len) == '+')
	{
		neg = 0;
	}
	while ((*(str + ++len) >= '0' && *(str + len) <= '9'))
	{
		res *= 10;
		res += *(str + len) - '0';
	}
	return (neg == 1 ? -1 * res : res);
}
