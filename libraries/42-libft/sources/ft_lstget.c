/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:52:45 by mconreau          #+#    #+#             */
/*   Updated: 2022/10/10 16:05:54 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_lst	*ft_lstget(t_lst *lst, size_t pos)
{
	int	index;

	if (!lst)
		return (NULL);
	index = -1;
	while (++index < (int) pos)
	{
		lst = lst->next;
		if (!lst)
			return (NULL);
	}
	return (lst);
}
