#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "ft_printf.h"
// структура
typedef struct s_stack{
    int num;
    struct s_stack *next;
} t_stack; 

typedef struct s_list {
    int data;
    struct s_list *next;
} t_list;