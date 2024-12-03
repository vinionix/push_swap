# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/03 08:19:25 by vfidelis          #+#    #+#              #
#    Updated: 2024/12/03 08:19:25 by vfidelis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

FUNCTIONS = push_swap.c \
			libft_fun.c \
			ft_error.c \
			ft_useful.c \
			ft_useful2.c \
			ft_initialize.c

OBJS =	push_swap.o \
		libft_fun.o \
		ft_error.o \
		ft_useful.o \
		ft_useful2.o \
		ft_initialize.o

LIB = push_swap.a

NAME = push_swap

.c.o:
	cc $(FLAGS) -c $< -o $(<:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(LIB) $(OBJS)
	cc $(FLAGS) push_swap.c push_swap.a -o $(NAME)
clean:
	rm -f $(OBJS)
fclean:
	rm -f $(OBJS) $(LIB) $(NAME)

re: fclean all