O_FILES = ft_printf.o ft_printf_utils.o
NAME	= libftprintf.a
LIBFT	= libft/libft.a

all: $(NAME)

$(NAME): $(O_FILES) $(LIBFT)
	cp $(LIBFT) ./libftprintf.a
	ar -rcs $(NAME) $(O_FILES)

$(LIBFT):
	make -C libft/ bonus

fclean: clean
	rm -rf $(NAME)
	make -C libft/ fclean

clean:
	rm -rf $(O_FILES)
	make -C libft/ clean

re: fclean all	

.c.o:
	gcc -Wall -Wextra -Werror -c $<

.PHONY: clean fclean all re