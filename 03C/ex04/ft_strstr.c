/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:31:10 by pedmurie          #+#    #+#             */
/*   Updated: 2022/03/01 13:45:01 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a])
	{
		b = 0;
		if (str[a] == to_find[b])
		{
			c = a;
			while (to_find[b] && to_find[b] == str[c])
			{
				c++;
				b++;
			}
			if (to_find[b] == '\0')
				return (&str[a]);
		}
		a++;
	}
	return (0);
}
