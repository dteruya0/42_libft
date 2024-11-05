/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:09:02 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/05 10:28:54 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	index = 0;
	while ((str1[index] != '\0' || str2[index] != '\0') && (index < n))
	{
		if (str1[index] > str2[index])
			return (str1[index] - str2[index]);
		else if (str1[index] < str2[index])
			return (str1[index] - str2[index]);
		index++;
	}
	return (0);
}
