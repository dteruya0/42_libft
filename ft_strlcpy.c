/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:49:40 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/30 10:59:03 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((src[count] != '\0') && (count < (size - 1)))
	{
		dst[count] = src[count];
		count++;
	}
	if (count < size)
	{
		dst[count] = '\0';
	}
	while (src[count] != '\0')
		count++;
	return (count);
}
