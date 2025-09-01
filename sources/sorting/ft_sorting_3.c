/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:24:51 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:34:56 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorting_3(t_app *app)
{
	if (ft_stack_is_higher(app->stack_a, 0))
		return (ft_process_ra(app, 1, 1));
	if (ft_stack_is_higher(app->stack_a, 1))
		return (ft_process_rra(app, 1, 1));
	if (ft_stack_is_higher(app->stack_a, 2))
		return (ft_process_sa(app, 1, 1));
}
