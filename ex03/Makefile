# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 11:09:03 by brandebr          #+#    #+#              #
#    Updated: 2024/10/08 14:58:08 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMateria 

SRC = main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp

OBJ_DIR = obj/

HEADERS = AMateria.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp Ice.hpp Cure.hpp

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -MMD -g

all: Makefile $(NAME)

$(OBJ_DIR)%.o: %.cpp $(HEADERS) Makefile
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

valgrind: $(NAME)
	@valgrind --leak-check=full --track-origins=yes ./$(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -rf $(OBJ_DIR)
	/bin/rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
