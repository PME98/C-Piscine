/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_torres.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:27:45 by pedmurie          #+#    #+#             */
/*   Updated: 2022/02/20 21:27:24 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_escribe(char c []);
char	ft_zero(void);
void 	ft_putchar(char c);
void	ft_torres(char *str)
{
	char	cuad[4][4];
	int		cont;
	int		caso;
	int		ind;
		
	cuad[4][4] = ft_zero();
	ind = 0;
	cont = 0;
	while (cont < 16)
	{
		caso = cont / 4;
		ind = cont % 4;
		if (*str == '1')
		{
			if (caso == 0)
				cuad[0][ind] = '4';
			else if (caso == 1)
				cuad[3][ind] = '4';
			else if (caso == 2)
				cuad[ind][0] = '4';
			else
				cuad[ind][3] = '4';
		}
		else if (*str == '4')
		{
			if (caso == 0)
			{
				cuad[0][ind] = '1';
				cuad[1][ind] = '2';
				cuad[2][ind] = '3';
			}
			else if (caso == 1)
			{
				cuad[3][ind] = '1';
				cuad[2][ind] = '2';
				cuad[1][ind] = '3';
			}
			else if (caso == 2)
			{
				cuad[ind][0] = '1';
				cuad[ind][1] = '2';
				cuad[ind][2] = '3';
			}
			else
			{
				cuad[ind][3] = '1';
				cuad[ind][2] = '2';
				cuad[ind][1] = '3';
			}
		}
		cont++;
		str +=  2;
	
	}
	ft_escribe(&cuad[0][0]);
}
