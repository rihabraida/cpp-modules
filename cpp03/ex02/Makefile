
CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

CPPFILES =  ClapTrap.cpp  main.cpp ScavTrap.cpp FragTrap.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = FragTrap

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CXX) $(OFILES)  -o $(EXECUTABLE) $(CXXFLAGS)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all