/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:23:55 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/08 08:48:20 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strcat;
	int		index;
	int		length1;
	int		length2;

	index = 0;
	length1 = ft_strlen(s1);
	length2 = length1 + ft_strlen(s2) + 1;
	strcat = (char *)malloc(length2 * sizeof(char));
	if (strcat == NULL)
		return (NULL);
	length2 = 0;
	while (index < length1)
	{
		strcat[index] = s1[index];
		index++;
	}
	while (s2[length2] != '\0')
		strcat[index++] = s2[length2++];
	strcat[index] = '\0';
	return (strcat);
}
