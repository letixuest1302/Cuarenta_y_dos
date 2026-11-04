NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = adaptative_sort.c bench_utils.c complex_sort.c error.c is_sorted.c \
	main.c medium_sort.c parse_args.c parse.c Push.c ReverseRotate.c Rotate.c \
	simple_sort.c small_sort.c sort_utils.c split_utils.c split.c swap.c main_utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re