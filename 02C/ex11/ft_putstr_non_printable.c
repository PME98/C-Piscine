/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:43:14 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/02/27 13:40:36 by pedmurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(int c, int err)
{
	char	*xd;

	xd = "0123456789abcdef";
	if (c <= 0 && err == 0)
	{
		c += 256;
	}
	if (c >= 16)
	{
		ft_puthex(c / 16, 1);
		ft_puthex(c % 16, 1);
	}
	else
	{
		if (err == 0)
			ft_putchar('0');
		ft_putchar(xd[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (str[a] <= 31 || str[a] >= 127)
		{	
			write(1, "\\", 1);
			b = str[a];
			ft_puthex(b, 0);
		}
		else
			write(1, &str[a], 1);
		a++;
	}
}
