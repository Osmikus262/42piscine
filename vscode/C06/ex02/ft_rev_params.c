/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:22:59 by osarikay          #+#    #+#             */
/*   Updated: 2023/07/30 12:24:04 by osarikay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	while (j > 0)
	{
		while (av[j][i] && j != 0)
		{
			ft_putchar(av[j][i]);
			i++;
		}
		j--;
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}
