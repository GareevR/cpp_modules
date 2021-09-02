CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=ZombieHorde.cpp Zombie.cpp main.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=zombies

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Zombie.hpp
	$(CC) $(CFLAGS) main.cpp

Zombie.o: Zombie.cpp Zombie.hpp
	$(CC) $(CFLAGS) Zombie.cpp

ZombieHorde.o: ZombieHorde.cpp Zombie.hpp
	$(CC) $(CFLAGS) ZombieHorde.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
