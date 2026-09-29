NAME	=	libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs
OBJS = $(SRC:.c=.o)

SRC	=	ft_printf.c			\
		ft_putchar.c		\
		ft_puthex.c		\
		ft_putnbr.c		\
		ft_putptr.c		\
		ft_putstr.c		\
		ft_putunsigned

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all

.PHONY:	all clean fclean re