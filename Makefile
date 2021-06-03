NAME = push_swap

#COMPILE

CC = clang
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address

#LIBFT

LIBFT = libft/libft.a

#DIRECTORY

DIR_BUILD = build/
INC = -I includes -I libft

SRCS = main.c \
		checker.c error.c

OBJS = $(addprefix $(DIR_BUILD), $(SRCS:.c=.o))


Black = \e[1;30m
Red = \e[1;31m
Green = \e[1;32m
Yellow = \e[1;33m
Blue = \e[1;34m
Magenta = \e[1;35m
Cyan = \e[1;36m
Light_gray = \e[1;37m
Dark_gray = \e[1;90m
White = \e[1;97m
End = \e[1;0m

all : $(LIBFT) start $(DIR_BUILD) $(NAME)
	@echo "$(Green)__________$(NAME) OK____________$(End)"

$(DIR_BUILD):
	@mkdir -p $@
	@echo "$(Blue)$@ Created$(End)"

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@ -L libft -lft
	@echo "$(Green)$@ Created$(End)"

$(LIBFT):
	@make -C libft/


$(OBJS): $(DIR_BUILD)%.o: %.c
	@$(CC) -c $(CFLAGS) $(INC) $< -o $@
	@echo "$(Cyan)BUILDING\033[5C->\033[5C$<$(End)"


start:
	@echo "$(Green)__________$(NAME)____________$(End)"

clean:
	@make -C libft clean
	@rm -rf $(DIR_BUILD)
	@echo "$(Red)REMOVE\033[5C->\033[5C$(DIR_BUILD)$(End)"

fclean:
	@make -C libft fclean
	@rm -rf $(DIR_BUILD)
	@rm -rf $(NAME)
	@echo "$(Red)REMOVE\033[5C->\033[5C$(DIR_BUILD)$(End)"
	@echo "$(Red)REMOVE\033[5C->\033[5C$(NAME)$(End)"

re: fclean all

.PHONY: all clean fclean re
