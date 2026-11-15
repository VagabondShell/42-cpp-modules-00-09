NAME        = Brains
CC          = c++
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98 
RM          = rm -rf
SRCS        = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp
OBJS        = $(SRCS:.cpp=.o) 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Dog.hpp Cat.hpp Animal.hpp Brain.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re
