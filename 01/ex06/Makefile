CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=Karen.cpp main.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=karenFilter

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Karen.hpp
	$(CC) $(CFLAGS) main.cpp

Karen.o: Karen.cpp Karen.hpp
	$(CC) $(CFLAGS) Karen.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
