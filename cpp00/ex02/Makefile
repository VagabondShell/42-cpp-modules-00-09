
NAME        = account
CC          = c++
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98 
RM          = rm -rf
SRCS        = Account.cpp tests.cpp
OBJS        = $(SRCS:.cpp=.o) 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@ -MMD

clean:
	$(RM) $(OBJS) $(OBJS:.o=.d)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

-include $(OBJS:.o=.d)

.PHONY: all clean fclean re
