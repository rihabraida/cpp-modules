
CC = c++
#-std=c++98
CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

CPPFILES = Account.cpp tests.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = Account

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CC) $(OFILES)  -o $(EXECUTABLE)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all