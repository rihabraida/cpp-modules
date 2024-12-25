
CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98 

CPPFILES =  AMateria.cpp  main.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = Interface

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CXX) $(OFILES)  -o $(EXECUTABLE) $(CXXFLAGS)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all