CC = cc
INCLUDE = includes
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDE)
NAME = libft.a
SOURCES = srcs/ft_isalnum.c \
		  srcs/ft_isalpha.c \
		  srcs/ft_isdigit.c \
		  srcs/ft_memset.c \
		  srcs/ft_isascii.c \
		  srcs/ft_isprint.c \
		  srcs/ft_strlen.c \
		  srcs/ft_bzero.c \
		  srcs/ft_memcpy.c \
		  srcs/ft_memmove.c \
		  srcs/ft_strlcpy.c \
		  srcs/ft_strlcat.c \
		  srcs/ft_toupper.c \
		  srcs/ft_tolower.c \
		  srcs/ft_strchr.c \
		  srcs/ft_strrchr.c \
		  srcs/ft_strncmp.c \
		  srcs/ft_memchr.c \
		  srcs/ft_memcmp.c
OBJECTS = $(SOURCES:.c=.o)
RM = rm -f

$(NAME): $(OBJECTS)
	ar rc $@ $(OBJECTS)

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re