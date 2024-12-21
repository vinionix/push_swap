/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 21:34:35 by vfidelis          #+#    #+#             */
/*   Updated: 2024/12/20 22:33:16 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void    ft_sort_tree(t_list **lst_a, t_list **lst_b)
{
    t_list  *temp;

    temp = (*lst_a)->next;
    if (check_sort(*lst_a) == 0)
        return ;
    if ()
}

void     what_algorithm(t_list **lst_a, t_list **lst_b)
{
    if (ft_lstsize(lst_a) == 3)
        ft_sort_tree(lst_a, lst_b);
    else if (ft_lstsize(lst_a) == 5)
        ft_sort_five(lst_a, lst_b);
    else
        ft_radix_sort(lst_a, lst_b);
    return ;
}