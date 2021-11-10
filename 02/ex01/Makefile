CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=Fixed.cpp main.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=fixed

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Fixed.hpp
	$(CC) $(CFLAGS) main.cpp

Fixed.o: Fixed.cpp Fixed.hpp
	$(CC) $(CFLAGS) Fixed.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
