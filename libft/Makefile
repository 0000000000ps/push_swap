NAME = libft.a

SRCS = ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strmapi.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_doub_lstadd_back.c \
		ft_lstsize.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = gcc -g
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar cr $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(NAME)
	$(CC) $(CFLAGS) -c $(SRCS_BONUS)
	ar rc $(NAME) $(OBJS_BONUS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
