/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 02:22:56 by vfidelis          #+#    #+#             */
/*   Updated: 2024/11/30 02:22:56 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int ft_error(int num)
{
    if (num == 0)
    {
        write(2, "Error", 5);
        exit(1);
    }
    return (2);
}

int ft_atoi_error(char *str, size_t i)
{
    if (str == NULL)
        return(ft_error(0));
    else if ((str[i] != '-' && str[i] != '+') && !(str[i] >= '0' && str[i] <= '9'))
        return(ft_error(0));
    else if((str[i] == '-') && (str[i + 1] == '-' || str[i + 1] == '+'))
        return(ft_error(0)); 
    else if((str[i] == '+') && (str[i + 1] == '-' || str[i + 1] == '+'))
        return(ft_error(0));
    return (ft_error(2));
}
