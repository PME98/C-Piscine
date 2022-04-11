/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:09:00 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/02/23 19:12:31 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	a;
	int	cont;

	a = 0;
	cont = 0;
	while (str[a] != '\0')
	{
		if ((str[a] > 32) && (str[a] <= 126))
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
