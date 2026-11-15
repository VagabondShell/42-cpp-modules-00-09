NAME        = ScavTrap
CC          = c++
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98 
RM          = rm -rf
SRCS        = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS        = $(SRCS:.cpp=.o) 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re
