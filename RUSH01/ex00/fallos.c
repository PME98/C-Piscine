/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fallos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:43:16 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/02/20 17:03:10 by pedmurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fallos(char *str)
{
	while (*str != '\0')
		str++;
	if (str > 31)
		ft_putchar("Error\n");
}
