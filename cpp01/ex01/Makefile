CC = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

CPPFILES =  Zombie.cpp zombieHorde.cpp main.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = ZombieHorde

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CC) $(OFILES)  -o $(EXECUTABLE) $(CXXFLAGS)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all