#include "main.h"

void test_islower(int n)
{
	int r;

	r = islower(n);
	putchar(r + '0');
	putchar('\n');
}

int main(void)
{
	test_islower('H');
	return (0);
}
