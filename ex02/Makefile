
CC = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

CPPFILES = Account.cpp tests.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = Account

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CC) $(OFILES)  -o $(EXECUTABLE) $(CXXFLAGS)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all