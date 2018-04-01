# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alyle <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/31 11:28:47 by alyle             #+#    #+#              #
#    Updated: 2018/04/01 00:37:37 by alyle            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

LIBNAME = libft.a

GCCFLAGS = -Wall -Wextra -Werror

SRCS = main.c ft_putnbr.c ft_atoi.c eval_expr.c ft_stack.c

OBJ = main.o ft_putnbr.o ft_atoi.o eval_expr.o ft_stack.o

all: $(LIBNAME) $(NAME)

$(NAME):
	@gcc $(GCCFLAGS) -o $(NAME) -L . $(LIBNAME)

$(LIBNAME):
	@gcc $(GCCFLAGS) -c $(SRCS)
	@ar rc $(LIBNAME) $(OBJ)
	@ranlib $(LIBNAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(LIBNAME)

re: fclean all
