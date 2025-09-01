/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:13:37 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:30:05 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_do_process(t_app *app, const char *move);
static void	ft_process(t_app *app);

int	main(int argc, char **argv)
{
	t_app	app;

	if (argc == 1)
		exit(EXIT_FAILURE);
	ft_app_initialize(&app, argc, argv);
	ft_process(&app);
	if (ft_lstsize(app.stack_a) == app.count
		&& ft_stack_is_sorted(app.stack_a))
		ft_exit_success(&app, "OK\n", 0);
	ft_exit_failure(&app, "KO\n", 0);
}

static void	ft_do_process(t_app *app, const char *move)
{
	if (ft_strlen(move) == 2 && !ft_strncmp(move, "pa", 2))
		return (ft_process_pa(app, 0, 1));
	if (ft_strlen(move) == 2 && !ft_strncmp(move, "pb", 2))
		return (ft_process_pb(app, 0, 1));
	if (ft_strlen(move) == 2 && !ft_strncmp(move, "ra", 2))
		return (ft_process_ra(app, 0, 1));
	if (ft_strlen(move) == 2 && !ft_strncmp(move, "rb", 2))
		return (ft_process_rb(app, 0, 1));
	if (ft_strlen(move) == 2 && !ft_strncmp(move, "rr", 2))
		return (ft_process_rr(app, 0, 1));
	if (ft_strlen(move) == 3 && !ft_strncmp(move, "rra", 3))
		return (ft_process_rra(app, 0, 1));
	if (ft_strlen(move) == 3 && !ft_strncmp(move, "rrb", 3))
		return (ft_process_rrb(app, 0, 1));
	if (ft_strlen(move) == 3 && !ft_strncmp(move, "rrr", 3))
		return (ft_process_rrr(app, 0, 1));
	if (ft_strlen(move) == 2 && !ft_strncmp(move, "sa", 2))
		return (ft_process_sa(app, 0, 1));
	if (ft_strlen(move) == 2 && !ft_strncmp(move, "sb", 2))
		return (ft_process_sb(app, 0, 1));
	if (ft_strlen(move) == 2 && !ft_strncmp(move, "ss", 2))
		return (ft_process_ss(app, 0, 1));
	ft_exit_failure(app, "Error\n", 0);
}

static void	ft_process(t_app *app)
{
	char	*memory;
	char	buffer[4];

	while (1)
	{
		ft_bzero(buffer, 4);
		memory = get_next_line(STDIN_FILENO);
		if (!memory)
			return ;
		ft_strlcpy(buffer, memory, ft_strlen(memory));
		ft_do_process(app, buffer);
		ft_free((void *) memory);
	}
}
