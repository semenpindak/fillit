CFLAGS:= -Wall -Wextra -Werror
SRCS:=	fillit.c\
		create_list.c\
		node_filling.c\
		create_map.c\
		algorithm.c\
		zeroing_coordinates.c\
		clear_print_tetramino.c\
		map_increase.c\
		print_tetramino_on_map.c\
		str_len_slan_n.c\
		move_tetramino_on_step.c\
		move_tetramino_x.c\
		move_tetramino_y.c\
		validation.c\
		validation_block.c
OBJ:= $(SRCS:c=o)
PROGRAM = fillit

.PHONY: all clean fclean re
all: $(PROGRAM)

$(PROGRAM): ${OBJ}
	make -C libft/
	${CC} $(CFLAGS) ${OBJ} -o $@ -L libft/ -lft

%.o: %.c
	${CC} ${CFLAGS} -g -MD -c $<
include $(wildcard *.d)

clean:
	rm -f $(OBJ) *.d && make clean -C libft/

fclean: clean
	rm -f $(PROGRAM) && make fclean -C libft/

re: fclean all
