/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:53:36 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/21 14:37:35 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	while (((char *)src)[index] != '\0' && index < n)
	{
		((char *)dest)[index] = ((char *)src)[index];
		index++;
	}
	if (index <= n)
	{
		((char *)dest)[index] = '\0';
	}
	return (dest);
}
