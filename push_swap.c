/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavramen <aavramen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:36:28 by aavramen          #+#    #+#             */
/*   Updated: 2024/04/23 10:36:50 by aavramen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a; // yказывает всегда на первую структуру
    t_stack *cursor; // бегающий
    int i;

    *a = NULL;
    if (argc<2)
        return 0;
    i = 0;
    a = malloc(sizeof(*a));
    while (i < argc)
    {
        num = ft_atoi(argv[i]);
        if (num == 0 && ft_strcmp(argv[i, "NULL"]) // упраление вводом неправильным 
        {
            ft_printf("Error: %s\\n", argv[i]);
            // освобождаем память и выходим
            free(a);
            return 1;
        }
        else
        {
            ft_add_to_list(a, num);
            i++;
        }
    }
    
    
    
}
