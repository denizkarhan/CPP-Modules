NAME = PmergeMe

CC = g++ -Wall -Werror -Wextra -std=c++98

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

clean : 
	@rm -rf $(OBJ)

fclean : clean 
	@rm -rf $(NAME)

re : fclean all