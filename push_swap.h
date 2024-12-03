/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:32:37 by vfidelis          #+#    #+#             */
/*   Updated: 2024/11/25 16:32:37 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>

typedef struct s_list
{
    int num;
    size_t index;
    bool have_index;
    struct s_list *prev;
    struct s_list *next;
} t_list;

t_list *ft_lstnew(int num);
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstadd_back(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_last_lst(t_list *lst);
int     ft_atoi(char *str);
size_t ft_is_space(size_t i, char *str);
int ft_error(int num);
int ft_atoi_error(char *str, size_t i);
char **ft_split(char *str);
size_t ft_is_space(size_t i, char *str);
void    ft_free(char **hqts);
void    ft_initialize(t_list **lst, char **arg);
void    free_lst(t_list **a);

#endif