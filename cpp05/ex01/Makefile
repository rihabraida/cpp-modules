
CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98 

CPPFILES =  Bureaucrat.cpp  main.cpp Form.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = 	Bureaucrat

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CXX) $(OFILES)  -o $(EXECUTABLE) $(CXXFLAGS)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all