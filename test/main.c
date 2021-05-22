#include <stdio.h>

typedef struct		s_node
{
	int				num;
	struct s_node	*next;
}					t_node;

int		main(int ac, char **av)
{
	t_node *node;
	t_node *head;
	t_node *last;
	int a;

	a = 10;
	last = NULL;
	head = ft_lstnew(a);
	while ()
	{
		ft_lstadd_back(&head, node);

	}
	return (0);
}