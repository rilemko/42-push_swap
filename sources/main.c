/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:29:35 by mconreau          #+#    #+#             */
/*   Updated: 2024/10/12 15:44:47 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_process(t_app *app);
static void	ft_targets(t_app *app);
static void	ft_terminate(t_app *app);

int	main(int argc, char **argv)
{
	t_app	app;

	ft_app_initialize(&app, argc, argv);
	ft_process(&app);
	ft_exit_success(&app, "", 0);
}

static void	ft_process(t_app *app)
{
	ft_targets(app);
	while (ft_utils_lstcmp(app->stack_a, app->targets, app->count) > 0)
		ft_sorting_x(app);
	ft_terminate(app);
}

static void	ft_targets(t_app *app)
{
	int		index1;
	int		index2;
	int		cursor;
	t_lst	*list;

	index1 = -1;
	while (++index1 < app->count)
	{
		index2 = index1;
		while (++index2 < app->count)
		{
			if (*((int *) ft_lstgetcontent(app->targets, index1))
				> *((int *) ft_lstgetcontent(app->targets, index2)))
			{
				cursor = *((int *) ft_lstgetcontent(app->targets, index1));
				ft_free(ft_lstget(app->targets, index1)->content);
				list = ft_lstget(app->targets, index2);
				ft_lstget(app->targets, index1)->content = ft_intdup(
					*((int *) list->content));
				ft_free(ft_lstget(app->targets, index2)->content);
				ft_lstget(app->targets, index2)->content = ft_intdup(cursor);
			}
		}
	}
}

static void	ft_terminate(t_app *app)
{
	int	index;

	if (app->display_moves == 0)
	{
		index = -1;
		while (++index < app->moves)
		{
			ft_output(ft_lstgetcontent(app->movings, index), 1);
			ft_output("\n", 1);
		}
	}
}
