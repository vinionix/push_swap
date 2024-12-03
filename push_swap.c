/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:44:16 by vfidelis          #+#    #+#             */
/*   Updated: 2024/11/29 18:44:16 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

int main(int argc, char **argv)
{
    t_list  *a;

    a = NULL;
    if (argc == 1)
        return (0);
    else if (argc == 2)
    {
        argv = ft_split(argv[1]);
        ft_initialize(&a, argv);
        ft_free(argv);
        free_lst(&a);
    }
    else
        ft_initialize(&a, argv + 1);
}