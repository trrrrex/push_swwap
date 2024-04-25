#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
// принтф
#include "../push_swwap/ft_printf/ft_printf.h"
#include <limits.h>

// структура стаков
typedef struct s_stack{
    int num;
    struct s_stack *next;
    struct s_stack *new_node;
    struct s_stack *head;
} t_stack; 
// структура листов 
typedef struct s_list {
    int data;
    struct s_list *next;
} t_list;

// architecture before algorithm 
void 	ft_add_to_list(t_stack **head, int val);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_atoi(char *str, int *error);
int	    check_duplicates(char **input);
int	    ft_arg_checker(char **av);

// actions towards stacks 
void	ft_stack_rot(t_stack *stack);
void	ft_stack_rrot(t_stack *stack);
void	ft_stack_swap(t_stack *stack);
void	ft_stack_free(t_stack *stack);
t_list	*ft_stack_min(t_stack *stack);

// legal moves 

void	pb(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	sb(t_stack *stack);
void	sa(t_stack *stack);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rb(t_stack *stack);
void	ra(t_stack *stack);

#endif