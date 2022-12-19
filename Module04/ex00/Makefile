NAME = a.out

CC = g++ -std=c++98

CFLAGS = -Wall -Werror -Wextra

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
