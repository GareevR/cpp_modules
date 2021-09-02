CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=main.cpp AMateria.cpp MateriaSource.cpp Cure.cpp Ice.cpp Character.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=rpg

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp AMateria.hpp MateriaSource.hpp Cure.hpp Ice.hpp Character.hpp
	$(CC) $(CFLAGS) main.cpp

AMateria.o: AMateria.cpp AMateria.hpp ICharacter.hpp
	$(CC) $(CFLAGS) AMateria.cpp

Character.o: Character.cpp Character.hpp ICharacter.hpp AMateria.hpp
	$(CC) $(CFLAGS) Character.cpp

Cure.o: Cure.cpp Cure.hpp AMateria.hpp ICharacter.hpp
	$(CC) $(CFLAGS) Cure.cpp

Ice.o: Ice.cpp Ice.hpp AMateria.hpp ICharacter.hpp
	$(CC) $(CFLAGS) Ice.cpp

MateriaSource.o: MateriaSource.cpp MateriaSource.hpp AMateria.hpp IMateriaSource.hpp
	$(CC) $(CFLAGS) MateriaSource.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
