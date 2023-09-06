NAME = libft.a

SRC	=	ft_isalnum.c\
		ft_isalpha.c\
		ft_isprint.c\
		ft_strrchr.c\
		ft_isascii.c\
		ft_strchr.c \
		ft_tolower.c\
		ft_isalnum.c\
		ft_isdigit.c\
		ft_strlen.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_toupper.c\
		ft_memset.c\
		ft_bzero.c\
		ft_strncmp.c\
		ft_memcpy.c\
		ft_memchr.c\
		ft_memmove.c\
		ft_memcmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_striteri.c\
		ft_split.c\
		ft_strmapi.c\
		ft_printf.c \
		ft_u.c \
		ft_printstring.c \
		ft_printhex.c \
		ft_itoaprint.c

BONUS = ft_lstnew_bonus.c \
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c  

OBJ = $(SRC:.c=.o)

BON = $(BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I../Include
all: $(NAME)

$(NAME): $(OBJ) 
	ar -crs $(NAME) $(OBJ)

bonus: .bonus

.bonus: $(OBJ) $(BON) ./Include/libft.h
	ar -crs $(NAME) $(OBJ) $(BON)
	@touch .bonus

%.o: %.c ./Include/libft.h Makefile
	cc $(CFLAGS) -c $< -o $@ 

re: fclean all

clean:
	rm -rf $(OBJ) $(BON) .bonus

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean bonus