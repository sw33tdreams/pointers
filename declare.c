#include <stdio.h>

int main() {
	int a = 5;
	int *ptr = &a;
	printf("adress of a %p, %p\n", ptr, &a);
	printf("a = %d\n", *ptr);
	return 0;}
