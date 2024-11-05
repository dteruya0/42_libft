/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:53:02 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/05 18:07:10 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*point;

	if (nmemb != 0 && size != 0 && nmemb > (size_t) - 1 / size)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	ft_memset(point, 0, nmemb * size);
	return (point);
}
