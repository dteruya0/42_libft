/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:17:28 by dteruya           #+#    #+#             */
/*   Updated: 2024/11/08 09:14:08 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_s(char *s1, char *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

static int	ft_check_f(char *s1, char *set, int len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[len - 1] == set[j])
		{
			len--;
			j = -1;
		}
		j++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		finish;
	int		start;
	int		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	start = ft_check_s((char *)s1, (char *)set);
	finish = ft_check_f((char *)s1, (char *)set, len);
	if (finish <= start)
		return (ft_strdup(""));
	return (ft_substr(s1, start, finish - start));
}
