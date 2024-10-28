NAME = ex02
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp A.cpp B.cpp C.cpp Base.cpp
# SRCS = $(addprefix $(DIR)/,$(SRCS_RAW))
OBJS = $(SRCS:c=o)
# DIR = srcs

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)
re: clean all