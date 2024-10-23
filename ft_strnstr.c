/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:05:29 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/23 16:59:52 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t n)
{
	size_t	index;
	size_t	jindex;

	if (needle[0] == '\0')
		return ((char *) haystack);
	index = 0;
	while (haystack[index] != '\0' && index < n)
	{
		jindex = 0;
		while ((index + jindex) < n
			&& haystack[index + jindex] == needle[jindex])
		{
			if (needle[jindex + 1] == '\0')
				return ((char *)&haystack[index]);
			jindex++;
		}
		index++;
	}
	return (NULL);
}
