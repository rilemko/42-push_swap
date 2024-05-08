/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:05:34 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:36:41 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_process_sb(t_app *app, int move, size_t repeat)
{
	t_lst	*lst;

	while (repeat-- > 0)
	{
		if (app->size_b < 2)
			return ;
		ft_lstadd_front(&app->stack_b, ft_lstnew(
				ft_intdup(*((int *) ft_lstgetcontent(app->stack_b, 1)))));
		ft_lstdelone(ft_lstget(app->stack_b, 2), free);
		lst = ft_lstget(app->stack_b, 3);
		ft_lstget(app->stack_b, 1)->next = lst;
		if (move == 1)
			ft_move(app, "sb");
	}
}
