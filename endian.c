#include <stdio.h>

int main() {
	int a = 1;
	char* ptr = (char*)&a;
	*(ptr + 2) = 12;  
	printf("%c\n",*ptr);
	printf("%d\n",a);
	return 0;}
