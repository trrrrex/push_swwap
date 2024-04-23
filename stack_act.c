/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_act.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavramen <aavramen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:25:45 by aavramen          #+#    #+#             */
/*   Updated: 2024/04/23 18:26:14 by aavramen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_rot(t_stack *stack)
{
	t_list	*current;

	if (!stack->head || !stack->head->next)
		return ;
	current = stack->head;
	while (current->next)
		current = current->next;
	current->next = stack->head;
	current = stack->head->next;
	stack->head->next = NULL;
	stack->head = current;
}

void	ft_stack_rrot(t_stack *stack)
{
	t_list	*new_head;
	t_list	*new_last;

	if (!stack->head || !stack->head->next)
		return ;
	new_head = stack->head;
	while (new_head->next)
	{
		new_last = new_head;
		new_head = new_head->next;
	}
	new_last->next = 0;
	new_head->next = stack->head;
	stack->head = new_head;
}

void	ft_stack_swap(t_stack *stack)
{
	t_list	*to_first;
	t_list	*to_next;

	if (!stack->head || !stack->head->next)
		return ;
	to_next = stack->head;
	to_first = stack->head->next;
	to_next->next = to_first->next;
	to_first->next = to_next;
	stack->head = to_first;
}

void	ft_stack_free(t_stack *stack)
{
	t_list	*current;
	t_list	*to_free;

	current = stack->head;
	while (current)
	{
		to_free = current;
		current = current->next;
		if (to_free)
			free(to_free);
	}
	free(stack);
}

t_list	*ft_stack_min(t_stack *stack)
{
	t_list	*min_list;
	t_list	*current;
	int		min;

	current = stack->head;
	min_list = current;
	min = 2147483647;
	while (current)
	{
		if (current->data < min)
		{
			min = current->data;
			min_list = current;
		}
		current = current->next;
	}
	return (min_list);
}
