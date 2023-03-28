#include <stdio.h>

/**
 * main - curent function.
 *
 * Return always 0.
 */

int main(void)
{
	int a;
	int *p;

	a = 98;
	p = &a;
	printf("the adress before the increment : %p\n", p);
	printf("the adress of p : %p\n", &p);
	printf("the val of p : %d\n", *p);
	p++;
	printf("the adress after the increment : %p\n", p);
	printf("the val of p : %d\n", *p);
	*p++;
	printf("the adress of *p++ : %p\n", p);
	printf("the val of p : %d\n", *p);
	return (0);
}
