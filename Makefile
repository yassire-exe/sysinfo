CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -I include
SRC	= src/main.c src/ft_put.c src/ft_atoi.c src/ft_str.c \
	  src/info.c src/cpu.c src/mem.c src/display.c
OBJ	= $(SRC:.c=.o)
NAME	= sysinfo
