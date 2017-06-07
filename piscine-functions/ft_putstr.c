/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:37:06 by jkrause           #+#    #+#             */
/*   Updated: 2017/04/07 16:46:38 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_putchar(char *c);

void			ft_putstr(char *str)
{
	int		curr;
	char	*ref;

	curr = 0;
	ref = str + curr;
	while (*ref != '\0')
	{
		ref = str + curr++;
		ft_putchar(ref);
	}
}
