/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:00:28 by pedmurie          #+#    #+#             */
/*   Updated: 2022/03/01 22:02:40 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	{
		if (n == 0)
			return (0);
		while (i < (n - 1) && s1[i] && s2[i] && s1[i] == s2[i])
		{
			i++;
		}
	}
	return (s1[i] - s2[i]);
}
