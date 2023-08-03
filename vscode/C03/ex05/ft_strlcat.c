/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarikay <osarikay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:34:01 by osarikay          #+#    #+#             */
/*   Updated: 2023/07/24 17:34:33 by osarikay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return ((ft_strlen(dest)) + ft_strlen(&src[j]));
}

#include <stdio.h>

int main()
{
	char dest[] = "mustafa";
	char src[] = "acikgoz";
	printf("%d, %s", ft_strlcat(dest, src, 5), dest);
}