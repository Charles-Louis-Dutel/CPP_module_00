NAME = megaphone
C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD 

############################Sources########################
#SRCS_DIR = srcs/
FILES = megaphone


#SRCS = $(addprefix $(SRCS_DIR), $(FILES))
SRCS = $(addsuffix .cpp, $(FILES))
###########################Objects#########################
OBJS_DIR = objs_and_deps/
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

#DEPENDENCIES = $(patsubst %.o, %.d, $(OBJS))
DEPS = $(addprefix $(OBJS_DIR), $(addsuffix .d, $(FILES)))
##########################Libs#############################


##########################Rules############################
$(OBJS_DIR)%.o: %.cpp
	mkdir -p $(OBJS_DIR)
	$(C) $(CFLAGS) -c $< -o $@

all: ${NAME}

$(NAME): $(OBJS)
	$(C) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

-include $(DEPENDENCIES)