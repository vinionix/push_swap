/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:03:33 by vfidelis          #+#    #+#             */
/*   Updated: 2024/12/03 14:17:08 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		argv = ft_split(argv[1]);
		ft_initialize(&a, argv, argc);
		ft_free(argv);
	}
	else
		ft_initialize(&a, argv + 1, argc);
	what_algorithm(&a, &b);
	free_lst(&a);
}
