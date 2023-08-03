/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:56:18 by osarikay          #+#    #+#             */
/*   Updated: 2023/07/25 16:57:03 by osarikay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	u;
	int	m;
	int	t;

	u = 0;
	m = 1;
	t = 0;
	while ((str[u] >= 9 && str[u] <= 13) || str[u] == 32)
	{
		u++;
	}
	while (str[u] == '-' || str[u] == '+')
	{
		if (str[u] == '-')
			m *= -1;
		u++;
	}
	while (str[u] >= '0' && str[u] <= '9')
	{
		t = (str[u] - '0') + (t * 10);
		u++;
	}
	return (t * m);
}

int main()
{
	char str[] = "     ---123sdb123";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
}