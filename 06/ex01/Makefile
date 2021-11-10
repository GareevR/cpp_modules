CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=main.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=serialize

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Data.hpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
