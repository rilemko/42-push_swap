/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:12:26 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:34:56 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_process_rrr(t_app *app, int move, size_t repeat)
{
	while (repeat-- > 0)
	{
		ft_process_rra(app, 0, 1);
		ft_process_rrb(app, 0, 1);
		if (move == 1)
			ft_move(app, "rrr");
	}
}
