/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:35:09 by mconreau          #+#    #+#             */
/*   Updated: 2024/10/11 17:03:29 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_app_creation(t_app *app, char **argv);
static void	ft_app_precheck(t_app *app, int argc, char **argv);
static void	ft_app_validate(t_app *app);

void	ft_app_clear(t_app *app)
{
	ft_free((void *) app->args);
	if (app->argv != NULL)
		ft_free_deep((void **) app->argv);
	ft_lstclear(&app->movings, free);
	ft_lstclear(&app->stack_a, free);
	ft_lstclear(&app->stack_b, free);
	ft_lstclear(&app->targets, free);
}

void	ft_app_initialize(t_app *app, int argc, char **argv)
{
	app->args = malloc(0);
	app->argv = NULL;
	app->movings = NULL;
	app->stack_a = NULL;
	app->stack_b = NULL;
	app->targets = NULL;
	ft_app_precheck(app, argc, argv);
	app->count = app->argc - 1;
	app->size_a = app->count;
	app->size_b = 0;
	app->display_moves = 1;
	app->is_presorted = 0;
	app->median = app->count / 2;
	app->moves = 0;
	app->name = argv[0];
	ft_app_creation(app, app->argv);
	ft_app_validate(app);
}

static void	ft_app_creation(t_app *app, char **argv)
{
	int	index;

	index = 0;
	while (index++ < app->count)
	{
		ft_lstadd_back(&app->stack_a,
			ft_lstnew(ft_intdup(ft_atoi(argv[index]))));
		ft_lstadd_back(&app->targets,
			ft_lstnew(ft_intdup(ft_atoi(argv[index]))));
	}
}

static void	ft_app_precheck(t_app *app, int argc, char **argv)
{
	int	index1;
	int	index2;

	if (argc == 1)
		ft_exit_success(app, "", 0);
	index1 = -1;
	while (++index1 < argc)
		app->args = ft_strmjoin(ft_strmjoin(app->args, " "), argv[index1]);
	app->argv = ft_split(app->args, ' ');
	app->argc = ft_strcnt(app->args, ' ');
	index1 = 0;
	while (++index1 < app->argc)
	{
		index2 = -1;
		while (app->argv[index1][++index2])
		{
			if (index2 == 0 && ft_strchr("+-", app->argv[index1][index2]))
				continue ;
			if (!ft_strchr("0123456789", app->argv[index1][index2]))
				ft_exit_failure(app, "Error\n", 0);
		}
		if (ft_atoi(app->argv[index1]) > 2147483647
			|| ft_atoi(app->argv[index1]) < -2147483648)
			ft_exit_failure(app, "Error\n", 0);
	}
}

static void	ft_app_validate(t_app *app)
{
	int	index1;
	int	index2;

	index1 = -1;
	while (++index1 < app->count)
	{
		index2 = -1;
		while (++index2 < app->count)
		{
			if (index1 != index2
				&& *((int *) ft_lstgetcontent(app->stack_a, index1))
				== *((int *) ft_lstgetcontent(app->stack_a, index2)))
				ft_exit_failure(app, "Error\n", 0);
		}
	}
}
