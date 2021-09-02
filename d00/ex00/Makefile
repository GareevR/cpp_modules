CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=megaphone.cpp
OBJ=$(SOURCES:.cpp=.o)
NAME=megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

megaphone.o: megaphone.cpp
	$(CC) $(CFLAGS) megaphone.cpp

clean:
	rm -rf $(OBJ) $(NAME)
