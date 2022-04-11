/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:41:30 by pedmurie          #+#    #+#             */
/*   Updated: 2022/02/22 17:42:30 by pedmurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*myptr;
	int	cond;

	cond = size / 2;
	myptr = &tab[size -1];
	while (cond > 0)
	{
		ft_swap(myptr, tab);
		myptr--;
		tab++;
		cond --;
	}
}
