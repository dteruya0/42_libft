/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:53:36 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/04 10:01:15 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;
	char	*temp;
	char	*dst;

	dst = (char *) dest;
	temp = (char *) src;
	index = 0;
	if (dst == NULL && temp == NULL)
		return (NULL);
	if ((dst > temp && dst < temp + n))
	{
		while (n > 0)
		{
			dst[n - 1] = temp[n - 1];
			n--;
		}
		return (dest);
	}
	while (index < n)
	{
		dst[index] = temp[index];
		index++;
	}
	return (dest);
}
