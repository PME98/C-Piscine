/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:54:03 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/02/27 17:16:13 by pedmurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				a;
	unsigned int	result;

	result = 0;
	a = 0;
	while (src[a] != '\0' && a < ((int)size - 1))
	{
		dest[a] = src[a];
		a++;
	}
	while (src[result] != '\0')
	{
		result++;
	}
	if (size)
		dest[a] = '\0';
	return (result);
}
