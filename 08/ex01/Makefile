CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=main.cpp span.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=span

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp span.hpp
	$(CC) $(CFLAGS) main.cpp

span.o: span.cpp span.hpp
	$(CC) $(CFLAGS) span.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
