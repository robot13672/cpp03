# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 15:47:28 by  ikhristi         #+#    #+#              #
#    Updated: 2024/06/17 20:20:22 by  ikhristi        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

CC_FLAGS		= -std=c++98 -Wall -Wextra -Werror -g
CC				=	c++
OBJS_F			= obj/


OBJS		=	$(SRCS:.cpp=.o)
OBJS_P		=	$(addprefix $(OBJS_F), $(SRCS:.cpp=.o))
NAME		= 	claptrap

all:$(NAME)

$(OBJS_F)%.o: %.cpp
	@mkdir -p $(OBJS_F)
	@echo "Working on: $<"
	@$(CC) $(CC_FLAGS) -O3 -c $< -o $@

$(NAME): $(OBJS_P)
	@$(CC) $(CC_FLAGS) -O3 -o $(NAME) $(OBJS_P)
	@echo "OK"

clean:
	@rm -rf $(OBJS_F)

fclean:	clean
	@rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re