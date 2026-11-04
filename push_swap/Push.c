/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:13:28 by acornia           #+#    #+#             */
/*   Updated: 2026/11/04 15:08:58 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b, t_bench *bench)
{
	t_node	*node_to_move;

	if (!stack_a || !stack_b || !*stack_b)
		return ;
	node_to_move = *stack_b;
	*stack_b = (*stack_b)->next;
	node_to_move->next = *stack_a;
	*stack_a = node_to_move;
	write(1, "pa\n", 3);
	if (bench && bench->enabled)
	{
		bench->pa++;
		bench->total_ops++;
	}
}

void	pb(t_node **stack_a, t_node **stack_b, t_bench *bench)
{
	t_node	*node_to_move;

	if (!stack_a || !stack_b || !*stack_a)
		return ;
	node_to_move = *stack_a;
	*stack_a = (*stack_a)->next;
	node_to_move->next = *stack_b;
	*stack_b = node_to_move;
	write(1, "pb\n", 3);
	if (bench && bench->enabled)
	{
		bench->pb++;
		bench->total_ops++;
	}
}
