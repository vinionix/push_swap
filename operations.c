/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:11:33 by vfidelis          #+#    #+#             */
/*   Updated: 2024/12/03 10:11:33 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void    ft_swap_a_b(t_list **lst, char chr)
{
    t_list  *temp;
    temp = (*lst);
    (*lst) = (*lst)->next;
    temp->next = NULL;
    (*lst)->prev = NULL;
    temp->prev = (*lst);
    temp->next = (*lst)->next; 
    (*lst)->next = temp;
    if (chr == 'a')
        write(1, "sa\n", 3);
    else
        write(1, "sb\n", 3);
}
void    ft_push_a_b(t_list **lst1, t_list **lst2, char chr)
{
    t_list  *temp;

    temp = NULL;
    if((*lst1)->next != NULL)
        temp = (*lst1)->next;
    (*lst1)->next = NULL;
    if ((*lst2) == NULL)
    {
        *lst2 = *lst1;
        (*lst2)->next = NULL;
        (*lst2)->prev = NULL;
        (*lst1) = temp;
    }
    else
    {
        (*lst1)->prev = NULL;
        (*lst1)->next = (*lst2);
        (*lst2)->prev = (*lst1);
        (*lst2) = (*lst2)->prev;
        (*lst1) = temp;
    }
    if (chr == 'a')
        write(1, "pb\n", 3);
    else
        write(1, "pa\n", 3);
}

void    ft_rotate_a_b(t_list **lst, char chr)
{
    t_list  *temp;

    temp = (*lst);
    (*lst) = (*lst)->next;
    (*lst)->prev = NULL;
    temp->next = NULL;
    ft_lstadd_back(lst, temp);
    if (chr == 'a')
        write(1, "ra\n", 3);
    else
        write(1, "rb\n", 3);
}

void    ft_re_rotate_a_b(t_list **lst, char chr)
{
    t_list  *temp;
    t_list  *new;

    temp = ft_last_lst((*lst));
    new = temp->prev;
    new->next = NULL;
    temp->next = NULL;
    ft_lstadd_front(lst, temp);
    if (chr == 'a')
        write(1, "rra\n", 4);
    else
        write(1, "rra\n", 4);
}

int    check_sort(t_list *lst)
{
    int is_or_not;

    is_or_not = lst->num;
    if (lst->next != NULL)
        lst = lst->next;
    while(lst)
    {
        if (lst->num > is_or_not)
            is_or_not = lst->num;
        if (lst->num < is_or_not)
            return (-1);
        lst = lst->next;
    }
    return (0);
} 