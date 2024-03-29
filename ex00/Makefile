# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ambouren <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 17:34:50 by ambouren          #+#    #+#              #
#    Updated: 2022/11/23 17:34:51 by ambouren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
IFLAGS	=	-I includes
DFLAGS	=	-g -DDEBUG
ifeq ($(findstring debug, $(MAKECMDGOALS)), debug)
	CFLAGS	+=	$(DFLAGS)
endif
NAME	=	Polymorph
DEP_PATH=	deps/
OBJ_PATH=	objs/
SRC_PATH=	$(shell find srcs -type d)
SRCS	=	main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp
OBJS	=	$(addprefix $(OBJ_PATH), $(SRCS:.cpp=.o))
DEPS	=	$(addprefix $(DEP_PATH), $(SRCS:.cpp=.d))
vpath %.cpp $(foreach rep, $(SRC_PATH), $(rep))

# Compilation
all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_PATH)%.o	:	%.cpp
	@mkdir -p $(OBJ_PATH) $(DEP_PATH)
	$(CC) -o $@ -c $<  $(CFLAGS) $(IFLAGS) -MMD
	@mv $(@:.o=.d) $(DEP_PATH)

-include $(DEPS)

# Rules
clean	:
	rm -rf $(OBJ_PATH) $(DEP_PATH)

fclean	:	clean
	@rm -f $(NAME)

re		:	fclean all

debug	:	re

.PHONY	:	all clean fclean re debug
