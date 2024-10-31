/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 08:38:15 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/31 13:46:00 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	index;
	size_t	jindex;

	src_len = 0;
	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dst_len)
		return (src_len + dst_len);
	jindex = 0;
	index = dst_len;
	while (src[jindex] != '\0' && index + 1 < size)
		dst[index++] = src[jindex++];
	dst[index] = '\0';
	return (dst_len + src_len);
}
