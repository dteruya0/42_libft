/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:53:02 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/24 13:32:57 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*point;

	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	ft_memset(point, 0, nmemb * size);
	return (point);
}
