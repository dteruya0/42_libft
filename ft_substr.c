/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:03:55 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/05 18:10:52 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbstr;
	size_t	count;
	size_t	index;

	index = 0;
	count = ft_strlen(s);
	if (start >= count)
		return (ft_strdup(""));
	count = (count - (size_t)start);
	if (count < len)
		sbstr = (char *)malloc((count + 1) * sizeof(char));
	else
	{
		count = len;
		sbstr = (char *)malloc((count + 1) * sizeof(char));
	}
	if (sbstr == NULL)
		return (NULL);
	while (index < count)
	{
		sbstr[index] = s[index + start];
		index++;
	}
	sbstr[index] = '\0';
	return (sbstr);
}
