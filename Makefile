NAME			=	push_swap

SRC				=	$(wildcard *.c)

LIBFT			=	libft/libft.a

OBJS			=	${SRC:.c=.o}

CC				=	gcc

CFLAGS			=	-Wall -Werror -Wextra

.c.o			:
					${CC} ${CFLAGS}  -c $< -o ${<:.c=.o}

$(NAME)			:	${OBJS} ${LIBFT}
						${CC} ${CFLAGS} ${OBJS} -o ${NAME}	$(LIBFT) 

$(LIBFT)		:
					make -C libft

all				:	${NAME}

clean			:
					make clean -C libft
					@rm -rf ${OBJS}

fclean			:	clean
						@rm -rf ${NAME}

re				:	fclean all

.PHONY			:	all clean fclean re