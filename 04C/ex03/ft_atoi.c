/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:38:22 by pedmurie          #+#    #+#             */
/*   Updated: 2022/03/02 17:42:10 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(char *str)
{
	int		a;
	int		menos;
	int		num;

	a = 0;
	menos = 0;
	num = 0;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			menos++;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		num = num * 10 + (str[a] - 48);
		a++;
	}
	if (menos % 2 != 0)
		return (num * (-1));
	return (num);
}
