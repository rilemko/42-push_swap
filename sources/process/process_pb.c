/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_pb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:31:29 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:36:41 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_process_pb(t_app *app, int move, size_t repeat)
{
	t_lst	*list;

	while (repeat-- > 0)
	{
		if (app->size_a == 0)
			return ;
		ft_lstadd_front(&app->stack_b, ft_lstnew(
				ft_intdup(*((int *) ft_lstgetcontent(app->stack_a, 0)))));
		list = ft_lstget(app->stack_a, 0);
		app->stack_a = ft_lstget(app->stack_a, 1);
		ft_lstdelone(ft_lstget(list, 0), free);
		app->size_a--;
		app->size_b++;
		if (move == 1)
			ft_move(app, "pb");
	}
}
