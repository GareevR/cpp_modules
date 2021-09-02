CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=Bureaucrat.cpp main.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=bureaucrat

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Bureaucrat.hpp
	$(CC) $(CFLAGS) main.cpp

Bureaucrat.o: Bureaucrat.cpp Bureaucrat.hpp
	$(CC) $(CFLAGS) Bureaucrat.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
