CC=clang++
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=main.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Bureaucrat.cpp
OBJ=$(SOURCES:.cpp=.o)
EXECUTABLE=forms_v2

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp Form.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
	$(CC) $(CFLAGS) main.cpp

Bureaucrat.o: Bureaucrat.cpp Bureaucrat.hpp Form.hpp
	$(CC) $(CFLAGS) Bureaucrat.cpp

Form.o: Form.cpp Form.hpp Bureaucrat.hpp
	$(CC) $(CFLAGS) Form.cpp

PresidentialPardonForm.o: PresidentialPardonForm.cpp PresidentialPardonForm.hpp Bureaucrat.hpp Form.hpp
	$(CC) $(CFLAGS) PresidentialPardonForm.cpp

RobotomyRequestForm.o: RobotomyRequestForm.cpp RobotomyRequestForm.hpp Bureaucrat.hpp Form.hpp
	$(CC) $(CFLAGS) RobotomyRequestForm.cpp

ShrubberyCreationForm.o: ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp Bureaucrat.hpp Form.hpp
	$(CC) $(CFLAGS) ShrubberyCreationForm.cpp

clean:
	rm -rf $(OBJ) $(EXECUTABLE)
