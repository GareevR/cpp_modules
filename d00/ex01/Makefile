CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=Phonebook.class.cpp \
		Contact.class.cpp \
		main.cpp
OBJ=$(SOURCES:.cpp=.o)
NAME=Phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

main.o: main.cpp Phonebook.class.hpp Contact.class.hpp
	$(CC) $(CFLAGS) main.cpp

Phonebook.class.o: Phonebook.class.cpp Phonebook.class.hpp
	$(CC) $(CFLAGS) Phonebook.class.cpp

Contact.class.o: Contact.class.cpp Contact.class.hpp
	$(CC) $(CFLAGS) Contact.class.cpp

clean:
	rm -rf $(OBJ) $(NAME)
