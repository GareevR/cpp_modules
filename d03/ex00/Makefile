CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=ClapTrap.cpp main.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=claptrap

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp ClapTrap.hpp
	$(CC) $(CFLAGS) main.cpp

ClapTrap.o: ClapTrap.cpp ClapTrap.hpp
	$(CC) $(CFLAGS) ClapTrap.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
