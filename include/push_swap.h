/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mlubbers <mlubbers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/22 06:12:53 by mlubbers      #+#    #+#                 */
/*   Updated: 2024/01/23 09:07:48 by mlubbers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../libft/include/libft.h"
# include "../libft/include/ft_printf.h"

typedef struct s_stack_node
{
	int					value;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

char			**split(char *s, char c);
void			free_split(char **strlist);
void			init_stack_a(t_stack_node **a, char **argv);
t_stack_node	*find_last(t_stack_node *stack);
void			free_stack(t_stack_node **stack);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **b, t_stack_node **a);
void			sa(t_stack_node **a);
void			sb(t_stack_node **b);
void			ss(t_stack_node **a, t_stack_node **b);
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);
void			rra(t_stack_node **a);
void			rrb(t_stack_node **b);
void			rrr(t_stack_node **a, t_stack_node **b);
bool			stack_sorted(t_stack_node *stack);
int				stack_len(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);
void			sort_three(t_stack_node **a);
void			current_index(t_stack_node *stack);
void			sort_stacks(t_stack_node **a, t_stack_node **b);
void			init_nodes_a(t_stack_node *a, t_stack_node *b);
void			set_cheapest(t_stack_node *stack);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
t_stack_node	*get_cheapest(t_stack_node *stack);
void			rotate_both(t_stack_node **a,
					t_stack_node **b,
					t_stack_node *cheapest_node);
void			rev_rotate_both(t_stack_node **a,
					t_stack_node **b,
					t_stack_node *cheapest_node);
void			prep_for_push(t_stack_node **stack,
					t_stack_node *top_node,
					char stack_name);
int				error_syntax(char *str_n);
int				error_duplicate(t_stack_node *a, int n);
void			free_errors(t_stack_node **a);

#endif
