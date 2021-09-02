CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=Account.cpp tests.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=xxx

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

tests.o: tests.cpp Account.hpp
	$(CC) $(CFLAGS) tests.cpp

Account.o: Account.cpp Account.hpp
	$(CC) $(CFLAGS) Account.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
