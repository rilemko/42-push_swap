/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:52:45 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/23 17:19:41 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_lstgetpos(t_lst *lst, size_t pos)
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
	return (lst->content);
}
