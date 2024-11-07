/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:17:10 by diegoteruya       #+#    #+#             */
/*   Updated: 2024/11/07 14:56:33 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*l_lst;

	if (lst == NULL)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			l_lst = lst;
		lst = lst->next;
	}
	return (l_lst);
}
