fun := ft_memset \
       		ft_bzero \
			ft_memcpy \
			ft_memccpy

flag = -Wall -Wextra -Werror 
NAME := libft.a
OBJ = $(patsubst %,%.o,$(fun)) 
SRC = $(patsubst %,%.c,$(fun))
.PHONY: all clean fclean re


all: $(NAME)
	
$(NAME):
	gcc -I ./risa/libft.h $(flag) -c $(SRC)  
	ar rcs $(NAME) $(OBJ)
clean:
	@rm -f $(OBG)
fclean: clean
	@rm -f $(NAME)
re: fclean all
