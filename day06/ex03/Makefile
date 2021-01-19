NAME = identification
CFLAGS = -Wall -Wextra -Werror

SRC = identification.cpp Base.cpp A.cpp B.cpp C.cpp

OBJ = $(patsubst %.cpp,%.o,$(SRC))



all: $(NAME)
$(NAME): $(OBJ)
	clang++ $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	clang++ $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re