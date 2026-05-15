CC 		:= c++
NAME 	:= horde
CFLAGS 	:= -std=c++98 -Wall -Werror -Wextra

SRCS 	:= main.cpp zombieHorde.cpp Zombie.cpp
OBJS 	:= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re