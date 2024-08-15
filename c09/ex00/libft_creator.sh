#!/bin/sh

TARGET_LIB_FILES="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
OBJECT_LIB_FILES="ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o"
LIB_NAME="libft.a"

cc -Wall -Wextra -Werror -c $TARGET_LIB_FILES
ar rc $LIB_NAME $OBJECT_LIB_FILES
ranlib $LIB_NAME
