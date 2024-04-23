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
    int num;
    int error;

    error = 0;
    i = 1;
    a = NULL;
    cursor = NULL;
    if (argc<2)
    {
        ft_printf("Error \n");
        return (0);
    }


    //a = malloc(sizeof(*a));
    //if (!a)
   // {
    //    ft_printf("Error\n");
   //     return 1;
    //}
    while (i < argc)
    {

        num = ft_atoi(argv[i], &error);
        if (error || (num == 0 && ft_strcmp(argv[i], "0") != 0)) // упраление вводом неправильным 
        {
            ft_printf("Error: %s\n", argv[i]);
            // освобождаем память и выходим
            free(a);
            return 1;
        }
        else
        {
            ft_add_to_list(&a, num);
            i++;
        }
    }

    cursor = a;
    // while (cursor != NULL)
    // {
    //     ft_printf("Node value : %d\n", cursor->num);
    //     cursor = cursor->next;
    // }

    free (a);

    return 0;

    
    
    
}
