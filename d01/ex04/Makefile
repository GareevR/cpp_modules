CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=utilities.cpp main.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=replace

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp utilities.hpp
	$(CC) $(CFLAGS) main.cpp

utilities.o: utilities.cpp utilities.hpp
	$(CC) $(CFLAGS) utilities.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
