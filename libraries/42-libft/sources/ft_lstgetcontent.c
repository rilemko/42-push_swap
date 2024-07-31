/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetcontent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:09:38 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:39:02 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_lstgetcontent(t_lst *lst, size_t pos)
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
