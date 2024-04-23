/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavramen <aavramen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:16:02 by aavramen          #+#    #+#             */
/*   Updated: 2024/04/23 18:25:28 by aavramen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	ft_printf("pb\n");
	ft_stack_put(stack_a, stack_b);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	ft_printf("pa\n");
	ft_stack_put(stack_b, stack_a);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_printf("ss\n");
	ft_stack_swap(stack_a);
	ft_stack_swap(stack_b);
}

void	sb(t_stack *stack)
{
	ft_printf("sb\n");
	ft_stack_swap(stack);
}

void	sa(t_stack *stack)
{
	ft_printf("sa\n");
	ft_stack_swap(stack);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	ft_printf("rrr\n");
	ft_stack_rrot(stack_a);
	ft_stack_rrot(stack_b);
}

void	rra(t_stack *stack)
{
	ft_printf("rra\n");
	ft_stack_rrot(stack);
}

void	rrb(t_stack *stack)
{
	ft_printf("rrb\n");
	ft_stack_rrot(stack);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_printf("rr\n");
	ft_stack_rot(stack_a);
	ft_stack_rot(stack_b);
}

void	rb(t_stack *stack)
{
	ft_printf("rb\n");
	ft_stack_rot(stack);
}

void	ra(t_stack *stack)
{
	ft_printf("ra\n");
	ft_stack_rot(stack);
}
