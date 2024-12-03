/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 06:33:58 by vfidelis          #+#    #+#             */
/*   Updated: 2024/12/03 06:33:58 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_initialize(t_list **lst, char **arg)
{
    size_t  i;
    int num;

    num = 0;
    i = 0;
    while(arg[i])
    {
        num = ft_atoi(arg[i]);
        ft_lstadd_back(lst, ft_lstnew(num));
        i++;
    }
}