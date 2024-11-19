
CC = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98
CXXFLAGS += -fsanitize=address 

CPPFILES = PhoneBook.cpp Contact.cpp main.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = PhoneBook

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CC) $(OFILES)  -o $(EXECUTABLE)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all