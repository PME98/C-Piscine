/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:11:35 by pedmurie          #+#    #+#             */
/*   Updated: 2022/03/02 21:51:25 by pedmurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_read(char *c);

int	main(int argc, char **argv)
{
	argc = 0;
	ft_read(argv[0]);
	write(1, "\n", 1);
	return (0);
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
