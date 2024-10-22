/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:02:56 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/21 14:31:42 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t size)
{
	size_t			index;
	unsigned char	*str;

	index = 0;
	str = (unsigned char *) ptr;
	while (index < size && str[index] != '\0')
	{
		str[index] = c;
		index++;
	}
	return (ptr);
}
