/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:38:03 by mconreau          #+#    #+#             */
/*   Updated: 2024/03/24 12:36:41 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "_includes.h"
#include "_definitions.h"

void	ft_app_clear(t_app *app);
void	ft_app_initialize(t_app *app, int argc, char **argv);
void	ft_nxt_initialize(t_nxt *nxt, t_app *app);
void	ft_exit(t_app *app, int code);
void	ft_exit_failure(t_app *app, const char *message, int colored);
void	ft_exit_success(t_app *app, const char *message, int colored);
void	ft_move(t_app *app, const char *move);
void	ft_output(const char *message, int fd);
void	ft_output_failure(const char *message, int colored);
void	ft_output_success(const char *message, int colored);
void	ft_output_warning(const char *message, int colored);
void	ft_process_pa(t_app *app, int move, size_t repeat);
void	ft_process_pb(t_app *app, int move, size_t repeat);
void	ft_process_ra(t_app *app, int move, size_t repeat);
void	ft_process_rb(t_app *app, int move, size_t repeat);
void	ft_process_rr(t_app *app, int move, size_t repeat);
void	ft_process_rra(t_app *app, int move, size_t repeat);
void	ft_process_rrb(t_app *app, int move, size_t repeat);
void	ft_process_rrr(t_app *app, int move, size_t repeat);
void	ft_process_sa(t_app *app, int move, size_t repeat);
void	ft_process_sb(t_app *app, int move, size_t repeat);
void	ft_process_ss(t_app *app, int move, size_t repeat);
void	ft_sorting_x(t_app *app);
void	ft_sorting_2(t_app *app);
void	ft_sorting_3(t_app *app);
int		ft_stack_get_higher(t_lst *lst, size_t lstlen);
int		ft_stack_get_lower(t_lst *lst, size_t lstlen);
int		ft_stack_is_higher(t_lst *lst, size_t pos);
int		ft_stack_is_lower(t_lst *lst, size_t pos);
int		ft_stack_is_sorted(t_lst *lst);
int		ft_utils_count_moves(size_t pos, size_t lstlen, int abs_value);
int		ft_utils_get_index(t_lst *lst, int content);
int		ft_utils_get_target(t_app *app, t_lst *lst, size_t pos);
int		ft_utils_is_placed(t_app *app, size_t index_a, size_t index_b);
int		ft_utils_lstcmp(t_lst *lst1, t_lst *lst2, size_t size);
