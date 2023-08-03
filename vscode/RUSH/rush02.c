/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:48:34 by osarikay          #+#    #+#             */
/*   Updated: 2023/07/16 18:40:21 by osarikay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_drawline(char first, char mid, char fin, int x)
{
	int	i;
	int	middle_count;

	if (x <= 0)
	{
		return ;
	}
	i = 0;
	middle_count = x - 2;
	ft_putchar(first);
	if (x == 1)
	{
		ft_putchar('\n');
		return ;
	}
	else
	{
		while (i < middle_count)
		{
			ft_putchar(mid);
			i++;
		}
		ft_putchar(fin);
		ft_putchar('\n');
	}
}

void	ft_drawgap(char vertical, int x)
{
	int	i;
	int	space_count;

	if (x <= 0)
	{
		return ;
	}
	i = 0;
	space_count = x - 2;
	ft_putchar(vertical);
	if (x == 1)
	{
		ft_putchar('\n');
		return ;
	}
	else
	{
		while (i < space_count)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar(vertical);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	gap_count;

	if (y <= 0 && x <= 0 || y <= 0 || x <= 0)
	{
		write(1, "Enter a valid value\n", 20);
		return ;
	}
	i = 0;
	gap_count = y - 2;
	ft_drawline('A', 'B', 'A', x);
	if (y == 1)
	{
		return ;
	}
	else
	{
		while (i < gap_count)
		{
			ft_drawgap('B', x);
			i++;
		}
		ft_drawline('C', 'B', 'C', x);
	}
}
