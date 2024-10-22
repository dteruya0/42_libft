/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:24:29 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/21 14:32:00 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	while (index >= 0)
	{
		if (str[index] == c)
		{
			return ((char *)&str[index]);
		}
		index--;
	}
	return (NULL);
}
