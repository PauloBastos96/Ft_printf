/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulorod <paulorod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:24:42 by paulorod          #+#    #+#             */
/*   Updated: 2023/04/24 12:05:05 by paulorod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Counts the number of nodes in a list.*/
int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	if (lst)
	{
		if (lst->next)
			counter += ft_lstsize(lst->next);
		return (counter + 1);
	}
	return (0);
}
