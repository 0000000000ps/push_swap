#include <stdio.h>

void print(char *str);










int main()
{
	char *content = "hello";
	content = 0x111;
	print(content);
}

void print(char *str)
{
	str = 0x111;
	*str = 'z';
	printf("%s\n", str);
}

struct t_node1
{
	int value;
	t_node *next;
	next = 0x033;
}

next = t_node2;