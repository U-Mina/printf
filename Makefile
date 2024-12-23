NAME	= libftprintf.a
CC		= cc
CFLAGES	= -Wall -Wextra -Werror
SRC		= ft_csppf.c ft_uxpf.c ft_printf.c ft_idpf.c
OBJ		= $(SRC:.c=.o)
RM		= rm -f
AR		= ar
ARFLAGS	= -rcs

all: $(NAME)

$(NAME): ${OBJ}
		${AR} ${ARFLAGS} $(NAME) $(OBJ)

.c.o:
	${CC} ${CFLAGES} -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re