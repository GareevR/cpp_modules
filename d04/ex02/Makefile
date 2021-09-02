CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=Animal.cpp main.cpp Dog.cpp Cat.cpp Brain.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=brains

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	$(CC) $(CFLAGS) main.cpp

Animal.o: Animal.cpp Animal.hpp
	$(CC) $(CFLAGS) Animal.cpp

Dog.o: Dog.cpp Dog.hpp Animal.hpp
	$(CC) $(CFLAGS) Dog.cpp

Cat.o: Cat.cpp Cat.hpp Animal.hpp
	$(CC) $(CFLAGS) Cat.cpp

Brain.o: Brain.cpp Brain.hpp Brain.hpp
	$(CC) $(CFLAGS) Brain.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
