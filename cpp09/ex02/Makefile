.DEFAULT_GOAL					=	all

# PROGRAM NAME
NAME							=	PmergeMe

# COMPILE FLAGS
CXX								=	c++
CXXFLAGS						=	-Wall -Wextra -Werror -std=c++98
CXXFLAGS_SANITIZE				=	-fsanitize=address -g3
ifdef SANITIZE
CXXFLAGS						+=	$(CXXFLAGS_SANITIZE)
endif

# FILES
SRCS							=	main.cpp PmergeMe.cpp PmergeMeDequeSort.cpp PmergeMeVectorSort.cpp utils.cpp
OBJS							=	$(SRCS:.cpp=.o)

# BUILD
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# RULES
all:
	make $(NAME)
bonus:
	make $(NAME)
clean:
	$(RM) $(OBJS)
	$(RM) out.txt
fclean: clean
	$(RM) $(NAME)
re: 
	make fclean
	make all
test:
	make
	./${NAME} `jot -r 3000 1 100000 | tr '\n' ' '` > out.txt

.PHONY: all clean fclean re bonus test
