/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:40:00 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/21 13:37:53 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_lst **lst, void (*del)(void *))
{
	t_lst	*pointer;
	t_lst	*next;

	pointer = *lst;
	while (pointer)
	{
		next = pointer->next;
		ft_lstdelone(pointer, del);
		pointer = next;
	}
	*lst = NULL;
}
