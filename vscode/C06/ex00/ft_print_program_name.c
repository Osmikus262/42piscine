/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:19:41 by osarikay          #+#    #+#             */
/*   Updated: 2023/07/30 12:21:00 by osarikay         ###   ########.tr       */
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

	i = 0;
	if (ac)
	{
		while (av[0][i] != '\0')
		{
			ft_putchar(av[0][i]);
			i++;
		}
		ft_putchar('\n'); 
	}
	return (0);
}
