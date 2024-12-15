
CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

CPPFILES =  ClapTrap.cpp  main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = DiamondTrap

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CXX) $(OFILES)  -o $(EXECUTABLE) $(CXXFLAGS)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all