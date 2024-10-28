NAME = ex01
CC = c++
FLAGS = -Wall -Wextra -Werror -g3
# je n'unitilise pas std 98 parce que dans le sujet on demande d'utiliser uintptr_t et cela n'est pas disponible avec std 98 :)
SRCS = main.cpp Serializer.cpp
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