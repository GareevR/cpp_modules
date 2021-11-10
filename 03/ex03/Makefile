CC=clang++
CFLAGS=-c -Wall -Wextra -Werror -Wshadow -Wno-shadow
SOURCES=ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=diamondtrap

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
	$(CC) $(CFLAGS) main.cpp

ClapTrap.o: ClapTrap.cpp ClapTrap.hpp
	$(CC) $(CFLAGS) ClapTrap.cpp

ScavTrap.o: ScavTrap.cpp ScavTrap.hpp ClapTrap.hpp
	$(CC) $(CFLAGS) ScavTrap.cpp

FragTrap.o: FragTrap.cpp FragTrap.hpp ClapTrap.hpp
	$(CC) $(CFLAGS) FragTrap.cpp

DiamondTrap.o: DiamondTrap.cpp DiamondTrap.hpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(CFLAGS) DiamondTrap.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
