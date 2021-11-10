CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=Converter.cpp main.cpp utils.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=converter

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Converter.hpp utils.hpp
	$(CC) $(CFLAGS) main.cpp

Converter.o: Converter.cpp Converter.hpp
	$(CC) $(CFLAGS) Converter.cpp

utils.o: utils.cpp utils.hpp
	$(CC) $(CFLAGS) utils.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
