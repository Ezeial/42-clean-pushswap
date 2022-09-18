#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stacks {
	t_list *A;
	t_list *B;
	size_t	elem_count;
}	t_stacks;

int		ft_iswhitespace(char c);
t_list	*ft_lstmap_to_sorted_idx(t_list *lst);

int		ft_init_stacks(t_stacks *stacks);

void	ft_destroy_stacks(t_stacks *stacks);

int		ft_parse_int(char **str, int *parsed_int);
int		ft_parse_args(int ac, char **av, t_stacks *stacks);

void	ft_radix(t_stacks *stacks);
void	ft_sort(t_stacks *stacks);

void	ft_pa(t_stacks *stacks);
void	ft_pb(t_stacks *stacks);
void	ft_sb(t_stacks *stacks);
void	ft_sa(t_stacks *stacks);
void	ft_ss(t_stacks *stacks);
void	ft_ra(t_stacks *stacks);
void	ft_rb(t_stacks *stacks);
void	ft_rr(t_stacks *stacks);
void	ft_rra(t_stacks *stacks);
void	ft_rrb(t_stacks *stacks);
void	ft_rrr(t_stacks *stacks);

#endif