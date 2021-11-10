CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=main.cpp mutantstack.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=mutantstack

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp mutantstack.hpp
	$(CC) $(CFLAGS) main.cpp

mutantstack.o: mutantstack.cpp mutantstack.hpp
	$(CC) $(CFLAGS) mutantstack.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
