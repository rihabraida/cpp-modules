CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

CPPFILES =  Weapon.cpp HumanB.cpp HumanA.cpp main.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = Humans

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CXX) $(OFILES)  -o $(EXECUTABLE) $(CXXFLAGS)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all