/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:15:42 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/02/27 13:38:39 by pedmurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;
	int	cont;

	a = 0;
	cont = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= '0') && (str[a] <= '9'))
		{	
			cont++;
		}
		a++;
	}
	if (cont == a)
		return (1);
	else
		return (0);
}
