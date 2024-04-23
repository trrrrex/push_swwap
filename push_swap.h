#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../push_swwap/ft_printf/ft_printf.h"

// структура
typedef struct s_stack{
    int num;
    struct s_stack *next;
    struct s_stack *new_node;
} t_stack; 

typedef struct s_list {
    int data;
    struct s_list *next;
} t_list;

void 	ft_add_to_list(t_stack **head, int val);
int     ft_strcmp(const char *s1, const char *s2);
int    ft_atoi(char *str, int *error);

#endif