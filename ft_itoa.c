/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:24:23 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/01 12:22:26 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = n * (-1);
	}
	while (n > 9)
	{
		count++;
		n = n / 10;
	}
	count++;
	return (count);
}

static char	*ft_swap(int n, char *str, int len)
{
	int	index;

	index = len -1;
	while (n > 9)
	{
		str[index] = (n % 10) + '0';
		n = n / 10;
		index--;
	}
	str[index] = n + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_length(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(len + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	str = ft_swap(n, str, len);
	str[len] = '\0';
	return (str);
}
