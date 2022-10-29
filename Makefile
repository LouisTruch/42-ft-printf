NAME	= libftprintf.a

SRCS	= ft_printf.c \
		  ft_convert.c \
		  ft_utilities.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o	:	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}	:	${OBJS}
			ar rc ${NAME} ${OBJS}

all		:	${NAME}

clean	:	
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all

.PHONY	:	all clean fclean re
