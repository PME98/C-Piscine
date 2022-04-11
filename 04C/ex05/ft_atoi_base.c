/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:36:25 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/02 17:00:15 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	a;

	a = 0;
	while (base[a])
		a++;
	if (nbr >= a)
	{	
		ft_atoi_base(nbr / a, base);
		ft_atoi_base(nbr % a, base);
	}
	else
		ft_putchar(base[nbr]);
}
