NAME	:= agenda
CC 		:= c++ -std=c++98
CFLAGS	:= -Wall -Wextra -Werror

all: main.o Contact.o PhoneBook.o
	$(CC) $(CFLAGS) main.o Contact.o PhoneBook.o -o $(NAME)
	
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -c

Contact.o: Contact.cpp
	$(CC) $(CFLAGS) Contact.cpp -c

PhoneBook.o: PhoneBook.cpp
	$(CC) $(CFLAGS) PhoneBook.cpp -c
	
clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME) 
	
re: fclean all

.PHONY: clean fclean re all