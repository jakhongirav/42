#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h> // To use bool flags, e.g, to print or not to print
# include <limits.h> // To define MIN and MAX macros
# include "../Libft/libft.h"

typedef struct s_stack_node // A container of data enclosed in {} braces. `s_` for struct
{
	int   data; // The number to sort
	//int   index; // The number's fixed rank
	//int   push_cost; // How many commands in total 
	//bool  above_median; // Used to calculate `push_cost`
	//bool  cheapest; // The node that is cheapest to command
	//struct s_stack_node	*target_node; // The target node of a node in the opposite stack
	struct s_stack_node  *next; // A pointer to the next node
	struct s_stack_node  *prev; // A pointer to the previous node
}	t_stack_node; // The "shortened name", "t_stack_node". `t_` for type

typedef struct s_stack
{
	t_stack_node	*head;
	t_stack_node	*tail;
	int				size;
}	t_stack;

typedef struct s_data
{
	t_stack	*a;
	t_stack	*b;
}	t_data;

// List operations
t_stack	*add_node(t_stack	*ptr, int	value);
void	swap(t_stack	*ptr);

#endif
