SRCS        =   ft_printf.c\
                ft_printf_utils.c

HDR = ./ft_printf.h

OBJS		= 	$(SRCS:.c=.o)

NAME		= 	libftprintf.a

CC 			=	gcc

CFLAGS		= 	-Wall -Wextra -Werror

BONUS		= 	bonus

RM			= 	rm -f

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)


all:		$(NAME)

$(BONUS):	$(OBJS) $(BNS_OBJS)
			ar rcs $(NAME) $(OBJS) $(BNS_OBJS)

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS) $(BNS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
