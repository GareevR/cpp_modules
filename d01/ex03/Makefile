CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=violence

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Weapon.hpp HumanB.hpp HumanA.hpp
	$(CC) $(CFLAGS) main.cpp

Weapon.o: Weapon.cpp Weapon.hpp
	$(CC) $(CFLAGS) Weapon.cpp

HumanB.o: HumanB.cpp HumanB.hpp
	$(CC) $(CFLAGS) HumanB.cpp

HumanA.o: HumanA.cpp HumanA.hpp
	$(CC) $(CFLAGS) HumanA.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
