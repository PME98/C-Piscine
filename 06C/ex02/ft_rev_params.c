/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:04:24 by pedmurie          #+#    #+#             */
/*   Updated: 2022/03/02 23:07:30 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_read(char *c);

int	main(int argc, char **argv)
{
	int	a;

	a = argc - 1;
	while (a >= 1)
	{
		ft_read(argv[a]);
		write(1, "\n", 1);
		a--;
	}
}

void	ft_read(char *c)
{
	int	b;

	b = 0;
	while (c[b])
	{
		write(1, &c[b], 1);
		b++;
	}
}
