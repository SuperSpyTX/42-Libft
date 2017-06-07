/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 10:54:25 by jkrause           #+#    #+#             */
/*   Updated: 2017/04/11 22:09:56 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_putchar(char c);

void				ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb++;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
