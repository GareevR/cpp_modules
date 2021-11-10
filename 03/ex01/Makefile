CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=ClapTrap.cpp main.cpp ScavTrap.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=scavtrap

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp ClapTrap.hpp
	$(CC) $(CFLAGS) main.cpp

ClapTrap.o: ClapTrap.cpp ClapTrap.hpp
	$(CC) $(CFLAGS) ClapTrap.cpp

ScavTrap.o: ScavTrap.cpp ScavTrap.hpp ClapTrap.hpp
	$(CC) $(CFLAGS) ScavTrap.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
