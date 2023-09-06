NAME_C = client
NAME_S = server

PATH_OBJ = tmp/

SRC_C = client.c

OBJ_C = $(addprefix $(PATH_OBJ),$(SRC_C:.c=.o))

SRC_S = server.c

OBJ_S = $(addprefix $(PATH_OBJ),$(SRC_S:.c=.o)) 
	

CFLAGS = -Wall -Wextra -Werror -I./Include

all: makelib tmp $(NAME_C) $(NAME_S)

tmp:
	mkdir -p $(PATH_OBJ)

$(NAME_C): $(OBJ_C)
	cc $(CFLAGS) $(OBJ_C) ./libft/libft.a -o $(NAME_C)

$(NAME_S): $(OBJ_S) 
	cc $(CFLAGS) $(OBJ_S) ./libft/libft.a -o $(NAME_S)

makelib: 
	$(MAKE) -C ./libft 

$(PATH_OBJ)%.o: %.c ./Include/libft.h ./Include/minitalk.h Makefile
	@mkdir -p $(dir $@)
	cc $(CFLAGS) -c $< -o $@

re: fclean all

makefclean:
	$(MAKE) -C ./libft fclean

clean:
	rm -rf $(PATH_OBJ)

fclean: clean
	rm -rf $(NAME_C) $(NAME_S)

.PHONY: all re clean fclean bonus