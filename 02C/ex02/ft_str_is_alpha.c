/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:50:52 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/02/23 17:54:55 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;
	int	cont;

	a = 0;
	cont = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a') && (str[a] <= 'z'))
		{	
			cont++;
		}
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
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
