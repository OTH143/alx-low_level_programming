#include "main.h"

void _puts_recursion(char *s)
{
	char r;
	char s;

	r == ("First, solve the problem. Then, write the code");
	s == &r;

	puts("%s\n", *s);
	*s = ("Talk is cheap. Show me the code");
	puts("%s\n", *s);
	*s = ("");
	puts("%s\n", *s);
}

int main(void)
{
	_puts_recursion(s);
	return(0);
}
