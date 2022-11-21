NAME 	= libftprintf.a

SRCS	= ft_printf.c ft_print_nbr.c ft_print_pointer.c ft_print_unsigned.c ft_print_hexa.c \
			ft_print_percent.c ft_print_str.c 

OBJS	= ${SRCS:.c=.o}

CC	= cc

FLAGS = -Wall -Wextra -Werror

AR	= ar rc

RM	= rm -f

.c.o:
			${CC} ${FLAGS} -I ./ -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}
			
clean:
			${RM} ${OBJS} 

fclean:		clean
			${RM} ${NAME} 

re:			fclean all

.PHONY:		all clean fclean re