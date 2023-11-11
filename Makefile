#CXX is short for CPP Compiler
CXX:=c++
NAME:=prg
SRCS:=main.cpp
OBJS:= ${SRCS:.cpp=.o} 
CPPFLAGS:=-Wall -Wextra -Werror -std=c++98 
#Interesting? flags: -Wshadow and -Wno-shadow

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean
	make all

go: 
	make all
	./$(NAME)

ergo: 
	make re
	./$(NAME)

.PHONY: all clean fclean re go ergo
