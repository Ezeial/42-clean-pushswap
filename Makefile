SRCS		=	srcs/main.c \
				srcs/initialization/ft_init_stacks.c \
				srcs/destruction/ft_destroy_stacks.c \
				srcs/parsing/ft_parse_args.c srcs/parsing/ft_parse_int.c \
				srcs/utils/ft_iswhitespace.c srcs/utils/ft_lstmap_to_sorted_idx.c srcs/utils/ft_lstis_sorted.c \
				srcs/instruction/ft_pa.c srcs/instruction/ft_pb.c \
				srcs/instruction/ft_sa.c srcs/instruction/ft_sb.c srcs/instruction/ft_ss.c \
				srcs/instruction/ft_ra.c srcs/instruction/ft_rb.c srcs/instruction/ft_rr.c \
				srcs/instruction/ft_rra.c srcs/instruction/ft_rrb.c srcs/instruction/ft_rrr.c \
				srcs/sorting/ft_sort.c srcs/sorting/ft_radix.c srcs/sorting/ft_sort_two.c srcs/sorting/ft_sort_three.c srcs/sorting/ft_sort_five.c
OBJS		=	$(SRCS:.c=.o)

DIR_HEADERS	=	includes
HEADERS		=	push_swap.h
INCLUDES	=	$(addprefix $(DIR_HEADERS)/, $(HEADERS))

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -fsanitize=address
LIBFLAGS	=	-L./libft -lft
IFLAGS		=	-I./libft/includes -I./$(DIR_HEADERS)
RM			=	rm -rf

NAME		=	push_swap

all:		$(NAME)

%.o:		%.c $(INCLUDES)
			$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			make -C libft
			$(CC) $(CFLAGS) $(OBJS) $(LIBFLAGS) -o $(NAME)

clean:		
			make clean -C libft
			$(RM) $(OBJS)

fclean:		clean
			make fclean -C libft
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
