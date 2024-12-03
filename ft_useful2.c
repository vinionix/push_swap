/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_useful.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:02:37 by vfidelis          #+#    #+#             */
/*   Updated: 2024/11/29 19:02:37 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    free_lst(t_list **a)
{
    t_list  *temp;

    temp = NULL;
    while(*a)
    {
        temp = (*a)->next;
        free(*a);
        (*a) = temp;
    }
}
size_t ft_is_space(size_t i, char *str)
{
    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
        i++;
    return (i);
} 

void    ft_free(char **hqts)
{
    size_t i;

    if (!hqts || !*hqts)
        return ;
    i = 0;
    while (hqts[i])
    {
        free(hqts[i]);
        i++;
    }
    free(hqts);
    hqts = NULL;
    return ;
}