/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mlubbers <mlubbers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/09 10:41:42 by mlubbers      #+#    #+#                 */
/*   Updated: 2024/01/23 15:44:43 by mlubbers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	swap(t_stack_node **head)
{
	int	temp;

	if (!*head || !(*head)->next)
		return ;
	temp = (*head)->value;
	(*head)->value = (*head)->next->value;
	(*head)->next->value = temp;
}

void	sa(t_stack_node **a)
{
	swap(a);
	ftp_printf("sa\n");
}

void	sb(t_stack_node **b)
{
	swap(b);
	ftp_printf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b)
{
	swap(a);
	swap(b);
	ftp_printf("ss\n");
}
