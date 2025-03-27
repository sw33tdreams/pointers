#include <stdio.h>

int main() {
	int a = 5;
	int b = 10;
	int *ptr = &a;
	printf("%d\n",a);
	a = *ptr - 1;
	printf("%d\n",a);
	return 0;}
