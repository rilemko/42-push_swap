/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_sa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:01:35 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 13:28:54 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_process_sa(t_app *app, int move, size_t repeat)
{
	t_lst	*lst;

	while (repeat-- > 0)
	{
		if (app->size_a < 2)
			return ;
		ft_lstadd_front(&app->stack_a, ft_lstnew(
				ft_intdup(*((int *) ft_lstgetcontent(app->stack_a, 1)))));
		lst = ft_lstget(app->stack_a, 3);
		ft_lstdelone(ft_lstget(app->stack_a, 2), free);
		ft_lstget(app->stack_a, 1)->next = lst;
		if (move == 1)
			ft_move(app, "sa");
	}
}
