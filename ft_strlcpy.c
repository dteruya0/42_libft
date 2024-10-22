/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:49:40 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/22 10:27:35 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	count;
	size_t	index;

	index = 0;
	count = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((src[count] != '\0') && (count < (size - 1)))
	{
		dst[count] = src[count];
		count++;
	}
	index = count;
	if (index < size)
	{
		dst[index] = '\0';
		index++;
	}
	while (src[count] != '\0')
		count++;
	return (count);
}
