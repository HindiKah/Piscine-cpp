C++ = g++

C++FLAGS = -Wall -Wno-used -Werror -Wextra

NAME = 	phonebook

SRC = 	class.repertorie.cpp \
		main.cpp	\

OBJ = 	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(C++FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
