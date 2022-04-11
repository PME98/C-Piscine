/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:15:00 by pedmurie          #+#    #+#             */
/*   Updated: 2022/03/02 22:15:05 by pedmurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_read(char *c);

int	main(int argc, char **argv)
{
	int	a;

	a = 1;
	while (a < argc)
	{
		ft_read(argv[a]);
		write(1, "\n", 1);
		a++;
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
