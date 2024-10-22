/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:05:29 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/22 08:54:06 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t n)
{
	size_t	index;
	size_t	jindex;

	index = 0;
	if ((int)n < 0)
		return (NULL);
	while (index <= n)
	{
		jindex = 0;
		while (((haystack[index] == needle[jindex])
				|| (needle[jindex] == '\0')) && (index <= n))
		{
			if (needle[jindex] == '\0')
			{
				return (&haystack[index - jindex]);
			}
			else if (jindex >= n)
				return (NULL);
			jindex++;
			index++;
		}
		index++;
	}
	return (NULL);
}
