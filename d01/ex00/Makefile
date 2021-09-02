CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=newZombie.cpp randomChump.cpp Zombie.cpp main.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=zombies

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Zombie.hpp
	$(CC) $(CFLAGS) main.cpp

Zombie.o: Zombie.cpp Zombie.hpp
	$(CC) $(CFLAGS) Zombie.cpp

newZombie.o: newZombie.cpp Zombie.hpp
	$(CC) $(CFLAGS) newZombie.cpp

randomChump.o: randomChump.cpp Zombie.hpp
	$(CC) $(CFLAGS) randomChump.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
