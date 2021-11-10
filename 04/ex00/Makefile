CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=Animal.cpp main.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=animals

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(CFLAGS) main.cpp

Animal.o: Animal.cpp Animal.hpp
	$(CC) $(CFLAGS) Animal.cpp

Dog.o: Dog.cpp Dog.hpp Animal.hpp
	$(CC) $(CFLAGS) Dog.cpp

Cat.o: Cat.cpp Cat.hpp Animal.hpp
	$(CC) $(CFLAGS) Cat.cpp

WrongCat.o: WrongCat.cpp WrongCat.hpp WrongCat.hpp
	$(CC) $(CFLAGS) WrongCat.cpp

WrongAnimal.o: WrongAnimal.cpp WrongAnimal.hpp
	$(CC) $(CFLAGS) WrongAnimal.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
