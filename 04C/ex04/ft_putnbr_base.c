/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:00:15 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/03 12:01:09 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_compare(char *base)
{
	int	a;
	int	b;

	a = 0;
	while (base[a])
	{
		b = a + 1;
		while (base[b])
		{
			if (base[a] == base[b])
				return (1);
			b++;
		}
		a++;
	}
	if (a < 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			a;
	long int	n;

	a = 0;
	n = nbr;
	if (ft_compare(base) == 1)
		return ;
	if (n < 0)
	{	
		write(1, "-", 1);
		n *= -1;
	}
	while (base[a])
	{
		if (base[a] == '-' || base[a] == '+' || base[a] == ' ')
			return ;
		a++;
	}
	if (n >= a)
	{	
		ft_putnbr_base(n / a, base);
		ft_putnbr_base(n % a, base);
	}
	else
		ft_putchar(base[n]);
}
