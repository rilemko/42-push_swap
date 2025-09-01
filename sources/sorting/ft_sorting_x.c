/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:07:32 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/29 14:41:21 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_presort(t_app *app);
static void	ft_sort_process(t_app *app);
static void	ft_sort_endings(t_app *app);

void	ft_sorting_x(t_app *app)
{
	if (app->size_a == 2)
		return (ft_sorting_2(app));
	if (app->size_a == 3 && !ft_stack_is_sorted(app->stack_a))
		return (ft_sorting_3(app));
	if (app->size_a > 3 && !app->is_presorted)
		return (ft_sort_presort(app));
	if (app->size_b > 0 && app->is_presorted)
		return (ft_sort_process(app));
	if (app->size_b == 0 && app->is_presorted)
		return (ft_sort_endings(app));
}

static void	ft_sort_presort(t_app *app)
{
	while (app->size_a > app->median && app->size_a > 5)
	{
		if (ft_utils_get_index(app->targets,
				*((int *) ft_lstgetcontent(app->stack_a, 0)))
			<= app->median)
			ft_process_pb(app, 1, 1);
		else
			ft_process_ra(app, 1, 1);
	}
	ft_process_pb(app, 1, app->size_a - 3);
	app->is_presorted = 1;
}

static void	ft_sort_process(t_app *app)
{
	t_nxt	nxt;

	ft_nxt_initialize(&nxt, app);
	while (nxt.rotate_a > 0 && nxt.rotate_b > 0)
	{
		ft_process_rr(app, 1, 1);
		nxt.rotate_a--;
		nxt.rotate_b--;
	}
	while (nxt.rotate_a < 0 && nxt.rotate_b < 0)
	{
		ft_process_rrr(app, 1, 1);
		nxt.rotate_a++;
		nxt.rotate_b++;
	}
	if (nxt.rotate_a > 0)
		ft_process_ra(app, 1, nxt.rotate_a);
	else if (nxt.rotate_a < 0)
		ft_process_rra(app, 1, -nxt.rotate_a);
	if (nxt.rotate_b > 0)
		ft_process_rb(app, 1, nxt.rotate_b);
	else if (nxt.rotate_b < 0)
		ft_process_rrb(app, 1, -nxt.rotate_b);
	ft_process_pa(app, 1, 1);
}

static void	ft_sort_endings(t_app *app)
{
	if (ft_stack_get_lower(app->stack_a, app->size_a) <= app->median)
		return (ft_process_ra(app, 1, 1));
	return (ft_process_rra(app, 1, 1));
}
