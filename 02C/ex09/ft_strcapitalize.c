/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:19:49 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/02/27 20:30:38 by pedmurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
		{	
			str[a] += 32;
		}
		a++;
	}
	return (str);
}

char	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	ft_strlowcase(str);
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	a = 1;
	while (str[a] != '\0')
	{
		b = a - 1;
		if (str[b] < '0')
			str[a] = ft_strupcase(str[a]);
		if (str[b] > '9' && str[b] < 'A')
			str[a] = ft_strupcase(str[a]);
		if (str[b] > 'Z' && str[b] < 'a')
			str[a] = ft_strupcase(str[a]);
		if (str[b] > 'z')
			str[a] = ft_strupcase(str[a]);
		a++;
	}
	return (str);
}
