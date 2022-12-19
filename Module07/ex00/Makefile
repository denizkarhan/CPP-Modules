NAME = a.out

CC = c++ -std=c++98
CFLAGS= -Wall -Wextra -Werror

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
