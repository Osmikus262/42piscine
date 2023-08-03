/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:43:54 by osarikay          #+#    #+#             */
/*   Updated: 2023/07/19 08:40:54 by osarikay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	trash;

	i = 0;
	while (i < size / 2)
	{
		trash = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = trash;
		i++;
	}
}
