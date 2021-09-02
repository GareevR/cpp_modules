CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=main.cpp Form.cpp Bureaucrat.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=forms

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Form.hpp Bureaucrat.hpp
	$(CC) $(CFLAGS) main.cpp

Bureaucrat.o: Bureaucrat.cpp Bureaucrat.hpp Form.hpp
	$(CC) $(CFLAGS) Bureaucrat.cpp

Form.o: Form.cpp Form.hpp Bureaucrat.hpp
	$(CC) $(CFLAGS) Form.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
