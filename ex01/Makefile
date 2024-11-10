
CC = c++
#-std=c++98
CFLAGS = -g -Wall -Wextra -Werror

CPPFILES = PhoneBook.cpp 
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = PhoneBook

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CC) $(CFLAGS) $(OFILES)  -o $(EXECUTABLE)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all