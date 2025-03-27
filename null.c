#include <stdio.h>
 
int main() {
	int *p = NULL;
	printf("%p\n",p);
	int a = 10;
	p = &a;
	printf("%d\n",*p);
	return 0; 
}

