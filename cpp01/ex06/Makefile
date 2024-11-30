CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES =  Harl.cpp  main.cpp
OFILES = ${CPPFILES:.cpp=.o}
EXECUTABLE = harlFilter

all : $(EXECUTABLE)

$(EXECUTABLE) : $(OFILES)
				$(CXX) $(OFILES)  -o $(EXECUTABLE) $(CXXFLAGS)

clean :
			rm -rf  ${OFILES}

fclean : clean
			rm  -rf ${EXECUTABLE}
	
re: fclean all