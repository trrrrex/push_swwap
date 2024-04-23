/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavramen <aavramen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:10:19 by aavramen          #+#    #+#             */
/*   Updated: 2024/04/23 11:10:41 by aavramen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
long ft_atoi(char *str) // **gucci** atoi with overflow checks added 
{
    unsigned int    i;
    int digit;
    unsigned long long check;
    int np; // полярность (дефолтно позитив)

    check = 0;
    i = 0;
    np = 1;
// пропускаем пустые вводы 
    while (str[i] == ' ' || str[i] == '\t' || str[i] =='\f'
            || str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
            i++;
// чекаем нет ли левых знаков
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i++] == '-')
            np = -1;
    }

    digit = str[i] - '0';
    while (str[i] >= '0' && str[i] <= '9')
    {
        
        // Check for overflow
        if (check > (9223372036854775807ULL - digit) / 10) // Макс значение лонг лонга
            return (-1); // Оверфлоу возращает pomylku

        check = check * 10 + digit;
        i++;
    }

    if (str[i] != '\0')
        return 0;
    return (int)(np * check);

}*/
int	ft_atoi(char *str, int *flag)
{
	int		indx;
	long	suma;
	int		signo;

	indx = 0;
	suma = 0;
	signo = 1;
	while (str[indx] == 32 || (str[indx] >= 9 && str[indx] <= 13))
		indx++;
	if (str[indx] == '-' || str[indx] == '+')
	{
		if (str[indx] == '-')
			signo = signo * -1;
		indx++;
	}
	while (str[indx] >= '0' && str[indx] <= '9')
	{
		suma = suma * 10 + (str[indx] - '0');
		indx++;
		if (signo * suma > 2147483647 || signo * suma < -2147483648)
			return (*flag = 1, 0);
	}
	if ((indx > 0 && (str[indx - 1] < '0')) || str[indx] != '\0')
		*flag = 1;
	return (suma * signo);
}

int ft_strcmp(const char *s1, const char *s2) 
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void    ft_add_to_list(t_stack **head, int val)
{
    t_stack	*new_node;
	t_stack	*current;

	new_node = (t_stack *)malloc(sizeof(t_stack));

	if	(new_node == NULL)
	{
		ft_printf("Error\n");
		exit (1);
	}
	new_node->num = val;
	new_node->next = NULL; //последний нод
	
	//проверить пустой ли лиииииист
	if (*head == NULL)
		*head = new_node;
	// если лист не пустой, ищем последний нод и добавляем новый
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

}

int	check_duplicates(char **input)
{
	int	i;
	int	j;
    int error;

	i = 0;
	j = 0;
	while (input[i])
	{
		j = i;
		while (input[j])
		{
			if (i != j)
				if (ft_atoi(input[i], &error) == ft_atoi(input[j], &error))
			    	return (1);
			j++;
		}
		i++;
	}
	return (0);
}