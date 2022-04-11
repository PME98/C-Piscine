/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:10:01 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/13 18:01:17 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	conx;
	int	cony;

	if ((x > 32767 || y > 32767) || (x < 0 || y < 0))
		write(1, "ERROR\n", 6);
	else
	{
		cony = 0;
		while (cony++ < y)
		{
			conx = 0;
			while (conx++ < x)
			{
				if ((conx == 1 && cony == 1) || (conx == x && cony == y))
					ft_putchar('/');
				else if ((conx == x && cony == 1) || (cony == y && conx == 1))
					ft_putchar('\\');
				else if ((cony == 1 || cony == y) || (conx == 1 || conx == x))
					ft_putchar('*');
				else
					ft_putchar(' ');
			}
			write(1, "\n", 1);
		}
	}	
}
