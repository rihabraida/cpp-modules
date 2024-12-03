
CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

CPPFILES =  Fixed.cpp  main.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = FixedNum

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CXX) $(OFILES)  -o $(EXECUTABLE) $(CXXFLAGS)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all