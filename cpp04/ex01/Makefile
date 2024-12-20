
CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98 

CPPFILES =  Animal.cpp  main.cpp  WrongAnimal.cpp Brain.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = Animal

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CXX) $(OFILES)  -o $(EXECUTABLE) $(CXXFLAGS)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all