
SRC		= ft_ft.c ft_math.c main.c
PSRC	= srcs/
SRCS	= ${addprefix ${PSRC}, ${SRC}} 

HEADER	= includes/

OBJS	= ${SRCS:.c=.o}

NAME	= do-op

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
