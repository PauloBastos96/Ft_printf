/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulorod <paulorod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:00:41 by paulorod          #+#    #+#             */
/*   Updated: 2023/04/24 12:00:51 by paulorod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns the last node of the list*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = NULL;
	if (lst)
	{
		if (lst->next)
		{
			if (ft_lstlast(lst->next))
				last = ft_lstlast(lst->next);
			else
				last = lst->next;
		}
		else
			last = lst;
	}
	return (last);
}
