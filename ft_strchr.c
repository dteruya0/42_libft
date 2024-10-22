/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:50:11 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/21 14:31:03 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (str[index] != '\0' || str[index] == c)
	{
		if (str[index] == (char)c)
		{
			return ((char *)&str[index]);
		}
		index++;
	}
	return (NULL);
}
