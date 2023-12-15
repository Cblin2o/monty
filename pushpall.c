#include "main.h"

/**
 *
 */

int push()
{
	int i,top;

	if (i % 1 != 0 || i == NULL)
	{
		print("L<line_number>: usage: push integer");
		exit(0);
	}
	i = stack[top];
	print("insert a number ");
	scanf("%d\n", i);
	i++;

