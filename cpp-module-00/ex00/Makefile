NAME	:= megaphone
CC 		:= c++ -std=c++98
CFLAGS	:= -Wall -Wextra -Werror

all: megaphone.o
	$(CC) $(CFLAGS) megaphone.o -o $(NAME)
	
megaphone.o: megaphone.cpp
	$(CC) $(CFLAGS) megaphone.cpp -c

clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME) 
	
re: fclean all

.PHONY: clean fclean re all