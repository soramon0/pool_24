LIB_NAME = libft.a
SRCS_DIR = srcs
SRCS_NAMES = ${SRCS_DIR}/ft_putchar.c ${SRCS_DIR}/ft_swap.c ${SRCS_DIR}/ft_putstr.c ${SRCS_DIR}/ft_strlen.c ${SRCS_DIR}/ft_strcmp.c
OBJS_NAMES = ${SRCS_DIR}/ft_putchar.o ${SRCS_DIR}/ft_swap.o ${SRCS_DIR}/ft_putstr.o ${SRCS_DIR}/ft_strlen.o ${SRCS_DIR}/ft_strcmp.o
INCLUDES_DIR = includes
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(LIB_NAME)

$(LIB_NAME):
	cc $(CFLAGS) -c ${SRCS_DIR}/ft_putchar.c -o ${SRCS_DIR}/ft_putchar.o
	cc $(CFLAGS) -c ${SRCS_DIR}/ft_swap.c -o ${SRCS_DIR}/ft_swap.o
	cc $(CFLAGS) -c ${SRCS_DIR}/ft_putstr.c -o ${SRCS_DIR}/ft_putstr.o
	cc $(CFLAGS) -c ${SRCS_DIR}/ft_strlen.c -o ${SRCS_DIR}/ft_strlen.o
	cc $(CFLAGS) -c ${SRCS_DIR}/ft_strcmp.c -o ${SRCS_DIR}/ft_strcmp.o
	ar rc $(LIB_NAME) $(OBJS_NAMES)
	ranlib $(LIB_NAME)

clean:
	rm -f $(OBJS_NAMES)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all

.PHONY: all clean fclean re
