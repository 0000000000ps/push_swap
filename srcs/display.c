#include "../push_swap.h"

void	display(t_node *head)
{
	t_node	*p;

	if (head == NULL)
		return ;
	else
		head = head->next;
	
	printf("( ");
	p = head;
	do {
		printf("%d", (int)p->content);
		p = p->next;
		if (p != head)
			printf(", ");
	} while (p != head);
	printf(") \n");
}