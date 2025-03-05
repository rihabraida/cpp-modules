
CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98 

CPPFILES =  main.cpp  Span.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = Span

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CXX) $(OFILES)  -o $(EXECUTABLE) $(CXXFLAGS)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all